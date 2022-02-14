
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_xattr_datum {int name_len; int value_len; size_t data_crc; char* xname; char* xvalue; int hashkey; int xprefix; int xid; int xindex; int flags; int node; } ;
struct jffs2_sb_info {size_t xdatum_mem_usage; int * xattrindex; } ;
struct jffs2_raw_xattr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,size_t,size_t,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (struct jffs2_sb_info*,int,size_t,size_t*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_13(struct jffs2_sb_info *VAR_8, struct jffs2_xattr_datum *VAR_9)
{

 char *VAR_10;
 size_t VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 FUNC_0(FUNC_10(VAR_9->node) != VAR_6);
 FUNC_0(!FUNC_8(&VAR_9->xindex));
 retry:
 VAR_13 = VAR_9->name_len + 1 + VAR_9->value_len;
 VAR_10 = FUNC_6(VAR_13, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_15 = FUNC_4(VAR_8, FUNC_11(VAR_9->node)+sizeof(struct jffs2_raw_xattr),
          VAR_13, &VAR_11, VAR_10);

 if (VAR_15 || VAR_13!=VAR_11) {
  FUNC_1("jffs2_flash_read() returned %d, request=%d, readlen=%zu, at %#08x\n",
         VAR_15, VAR_13, VAR_11, FUNC_11(VAR_9->node));
  FUNC_5(VAR_10);
  return VAR_15 ? VAR_15 : -VAR_0;
 }

 VAR_10[VAR_9->name_len] = '\0';
 VAR_12 = FUNC_2(0, VAR_10, VAR_13);
 if (VAR_12 != VAR_9->data_crc) {
  FUNC_1("node CRC failed (JFFS2_NODETYPE_XATTR)"
         " at %#08x, read: 0x%08x calculated: 0x%08x\n",
         FUNC_11(VAR_9->node), VAR_9->data_crc, VAR_12);
  FUNC_5(VAR_10);
  VAR_9->flags |= VAR_5;
  return VAR_3;
 }

 VAR_9->flags |= VAR_4;
 VAR_9->xname = VAR_10;
 VAR_9->xvalue = VAR_10 + VAR_9->name_len+1;

 VAR_8->xdatum_mem_usage += VAR_13;

 VAR_9->hashkey = FUNC_12(VAR_9->xprefix, VAR_9->xname, VAR_9->xvalue, VAR_9->value_len);
 VAR_14 = VAR_9->hashkey % VAR_7;
 FUNC_7(&VAR_9->xindex, &VAR_8->xattrindex[VAR_14]);
 if (!VAR_16) {
  VAR_16 = 1;
  FUNC_9(VAR_8);
  if (!VAR_9->xname)
   goto retry;
 }

 FUNC_3("success on loading xdatum (xid=%u, xprefix=%u, xname='%s')\n",
    VAR_9->xid, VAR_9->xprefix, VAR_9->xname);

 return 0;
}
