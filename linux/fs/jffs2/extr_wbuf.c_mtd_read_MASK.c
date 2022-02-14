
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct jffs2_sb_info {scalar_t__ wbuf_len; scalar_t__ wbuf_ofs; scalar_t__ wbuf; int wbuf_sem; int wbuf_pagesize; int mtd; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,size_t,size_t*,int *) ;
 int FUNC_5 (char*,size_t,scalar_t__) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct jffs2_sb_info *VAR_2, loff_t VAR_3, size_t VAR_4, size_t *VAR_5, u_char *VAR_6)
{
 loff_t VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10;

 if (!FUNC_2(VAR_2))
  return FUNC_4(VAR_2->mtd, VAR_3, VAR_4, VAR_5, VAR_6);


 FUNC_1(&VAR_2->wbuf_sem);
 VAR_10 = FUNC_4(VAR_2->mtd, VAR_3, VAR_4, VAR_5, VAR_6);

 if ( (VAR_10 == -VAR_0 || VAR_10 == -VAR_1) && (*VAR_5 == VAR_4) ) {
  if (VAR_10 == -VAR_0)
   FUNC_5("mtd->read(0x%zx bytes from 0x%llx) returned ECC error\n",
    VAR_4, VAR_3);
  VAR_10 = 0;
 }


 if (!VAR_2->wbuf_pagesize || !VAR_2->wbuf_len)
  goto exit;


 if (FUNC_0(VAR_3) != FUNC_0(VAR_2->wbuf_ofs))
  goto exit;

 if (VAR_3 >= VAR_2->wbuf_ofs) {
  VAR_8 = (VAR_3 - VAR_2->wbuf_ofs);
  if (VAR_8 > VAR_2->wbuf_len)
   goto exit;
  VAR_9 = VAR_2->wbuf_len - VAR_8;
  if (VAR_9 > VAR_4)
   VAR_9 = VAR_4;
 } else {
  VAR_7 = (VAR_2->wbuf_ofs - VAR_3);
  if (VAR_7 > VAR_4)
   goto exit;
  VAR_9 = VAR_4 - VAR_7;
  if (VAR_9 > VAR_2->wbuf_len)
   VAR_9 = VAR_2->wbuf_len;
 }
 if (VAR_9 > 0)
  FUNC_3(VAR_6+VAR_7,VAR_2->wbuf+VAR_8,VAR_9);

exit:
 FUNC_6(&VAR_2->wbuf_sem);
 return VAR_10;
}
