
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kvec {int iov_len; struct jffs2_raw_xattr* iov_base; } ;
struct jffs2_xattr_datum {int flags; int name_len; int value_len; struct jffs2_raw_xattr* xname; int xprefix; int version; int xid; } ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_xattr {int name_len; void* node_crc; void* data_crc; void* value_len; int xprefix; void* version; void* xid; void* hdr_crc; void* totlen; void* nodetype; void* magic; } ;
typedef int rx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct jffs2_raw_xattr*,int) ;
 int FUNC_6 (char*,int ,int ,int ,struct jffs2_raw_xattr*) ;
 int FUNC_7 (struct jffs2_sb_info*,int,int ,void*) ;
 int FUNC_8 (struct jffs2_sb_info*,struct kvec*,int,int,size_t*,int ) ;
 int FUNC_9 (struct jffs2_raw_xattr*,int ,int) ;
 int FUNC_10 (struct jffs2_sb_info*) ;

__attribute__((used)) static int FUNC_11(struct jffs2_sb_info *VAR_7, struct jffs2_xattr_datum *VAR_8)
{

 struct jffs2_raw_xattr VAR_9;
 struct kvec VAR_10[2];
 size_t VAR_11;
 int VAR_12, VAR_13;
 uint32_t VAR_14 = FUNC_10(VAR_7);

 FUNC_0(!VAR_8->xname);
 FUNC_0(VAR_8->flags & (VAR_3|VAR_4));

 VAR_10[0].iov_base = &VAR_9;
 VAR_10[0].iov_len = sizeof(VAR_9);
 VAR_10[1].iov_base = VAR_8->xname;
 VAR_10[1].iov_len = VAR_8->name_len + 1 + VAR_8->value_len;
 VAR_13 = VAR_10[0].iov_len + VAR_10[1].iov_len;


 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.magic = FUNC_3(VAR_1);
 VAR_9.nodetype = FUNC_3(VAR_2);
 VAR_9.totlen = FUNC_4(FUNC_2(VAR_13));
 VAR_9.hdr_crc = FUNC_4(FUNC_5(0, &VAR_9, sizeof(struct jffs2_unknown_node) - 4));

 VAR_9.xid = FUNC_4(VAR_8->xid);
 VAR_9.version = FUNC_4(++VAR_8->version);
 VAR_9.xprefix = VAR_8->xprefix;
 VAR_9.name_len = VAR_8->name_len;
 VAR_9.value_len = FUNC_3(VAR_8->value_len);
 VAR_9.data_crc = FUNC_4(FUNC_5(0, VAR_10[1].iov_base, VAR_10[1].iov_len));
 VAR_9.node_crc = FUNC_4(FUNC_5(0, &VAR_9, sizeof(struct jffs2_raw_xattr) - 4));

 VAR_12 = FUNC_8(VAR_7, VAR_10, 2, VAR_14, &VAR_11, 0);
 if (VAR_12 || VAR_13 != VAR_11) {
  FUNC_1("jffs2_flash_writev()=%d, req=%u, wrote=%zu, at %#08x\n",
         VAR_12, VAR_13, VAR_11, VAR_14);
  VAR_12 = VAR_12 ? VAR_12 : -VAR_0;
  if (VAR_11)
   FUNC_7(VAR_7, VAR_14 | VAR_5, FUNC_2(VAR_13), ((void*)0));

  return VAR_12;
 }

 FUNC_7(VAR_7, VAR_14 | VAR_6, FUNC_2(VAR_13), (void *)VAR_8);

 FUNC_6("success on saving xdatum (xid=%u, version=%u, xprefix=%u, xname='%s')\n",
    VAR_8->xid, VAR_8->version, VAR_8->xprefix, VAR_8->xname);

 return 0;
}
