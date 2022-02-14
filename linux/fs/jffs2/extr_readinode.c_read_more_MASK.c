
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {int wbuf_pagesize; } ;
struct jffs2_raw_node_ref {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,size_t,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct jffs2_sb_info*,int,int,size_t*,unsigned char*) ;
 scalar_t__ FUNC_3 (struct jffs2_sb_info*) ;
 int FUNC_4 (struct jffs2_raw_node_ref*) ;

__attribute__((used)) static int FUNC_5(struct jffs2_sb_info *VAR_1, struct jffs2_raw_node_ref *VAR_2,
       int VAR_3, int *VAR_4, unsigned char *VAR_5)
{
 int VAR_6, VAR_7 = VAR_3 - *VAR_4;
 size_t VAR_8;
 uint32_t VAR_9;

 if (FUNC_3(VAR_1)) {
  int VAR_10 = VAR_7 % VAR_1->wbuf_pagesize;

  if (VAR_10)
   VAR_7 += VAR_1->wbuf_pagesize - VAR_10;
 }


 VAR_9 = FUNC_4(VAR_2) + *VAR_4;

 FUNC_1("read more %d bytes\n", VAR_7);

 VAR_6 = FUNC_2(VAR_1, VAR_9, VAR_7, &VAR_8, VAR_5 + *VAR_4);
 if (VAR_6) {
  FUNC_0("can not read %d bytes from 0x%08x, "
   "error code: %d.\n", VAR_7, VAR_9, VAR_6);
  return VAR_6;
 }

 if (VAR_8 < VAR_7) {
  FUNC_0("short read at %#08x: %zu instead of %d.\n",
    VAR_9, VAR_8, VAR_7);
  return -VAR_0;
 }

 *VAR_4 += VAR_7;
 return 0;
}
