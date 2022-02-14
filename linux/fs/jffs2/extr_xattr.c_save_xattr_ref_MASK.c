
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_xattr_ref {int ino; int xid; int xseqno; TYPE_2__* xd; TYPE_1__* ic; } ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int highest_xseqno; } ;
struct jffs2_raw_xref {void* node_crc; void* xseqno; void* xid; void* ino; void* hdr_crc; void* totlen; void* nodetype; void* magic; } ;
typedef int rr ;
struct TYPE_4__ {int xid; } ;
struct TYPE_3__ {int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,size_t,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,struct jffs2_raw_xref*,int) ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (struct jffs2_xattr_ref*) ;
 int FUNC_7 (struct jffs2_sb_info*,int,int,void*) ;
 int FUNC_8 (struct jffs2_sb_info*,int,int,size_t*,char*) ;
 int FUNC_9 (struct jffs2_sb_info*) ;

__attribute__((used)) static int FUNC_10(struct jffs2_sb_info *VAR_6, struct jffs2_xattr_ref *VAR_7)
{

 struct jffs2_raw_xref VAR_8;
 size_t VAR_9;
 uint32_t VAR_10, VAR_11 = FUNC_9(VAR_6);
 int VAR_12;

 VAR_8.magic = FUNC_2(VAR_1);
 VAR_8.nodetype = FUNC_2(VAR_2);
 VAR_8.totlen = FUNC_3(FUNC_1(sizeof(VAR_8)));
 VAR_8.hdr_crc = FUNC_3(FUNC_4(0, &VAR_8, sizeof(struct jffs2_unknown_node) - 4));

 VAR_10 = (VAR_6->highest_xseqno += 2);
 if (FUNC_6(VAR_7)) {
  VAR_10 |= VAR_5;
  VAR_8.ino = FUNC_3(VAR_7->ino);
  VAR_8.xid = FUNC_3(VAR_7->xid);
 } else {
  VAR_8.ino = FUNC_3(VAR_7->ic->ino);
  VAR_8.xid = FUNC_3(VAR_7->xd->xid);
 }
 VAR_8.xseqno = FUNC_3(VAR_10);
 VAR_8.node_crc = FUNC_3(FUNC_4(0, &VAR_8, sizeof(VAR_8) - 4));

 VAR_12 = FUNC_8(VAR_6, VAR_11, sizeof(VAR_8), &VAR_9, (char *)&VAR_8);
 if (VAR_12 || sizeof(VAR_8) != VAR_9) {
  FUNC_0("jffs2_flash_write() returned %d, request=%zu, retlen=%zu, at %#08x\n",
         VAR_12, sizeof(VAR_8), VAR_9, VAR_11);
  VAR_12 = VAR_12 ? VAR_12 : -VAR_0;
  if (VAR_9)
   FUNC_7(VAR_6, VAR_11 | VAR_3, FUNC_1(sizeof(VAR_8)), ((void*)0));

  return VAR_12;
 }

 VAR_7->xseqno = VAR_10;
 FUNC_7(VAR_6, VAR_11 | VAR_4, FUNC_1(sizeof(VAR_8)), (void *)VAR_7);

 FUNC_5("success on saving xref (ino=%u, xid=%u)\n", VAR_7->ic->ino, VAR_7->xd->xid);

 return 0;
}
