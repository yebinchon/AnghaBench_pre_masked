
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int dummy; } ;
struct ubifs_info {int dummy; } ;
struct bu_info {int cnt; int buf_len; TYPE_1__* zbranch; void* buf; int key; int gc_seq; } ;
struct TYPE_2__ {int lnum; int offs; int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct ubifs_info*,int,int ) ;
 int FUNC_4 (struct ubifs_wbuf*,void*,int,int,int) ;
 int FUNC_5 (struct ubifs_info*,char*,int,int,...) ;
 struct ubifs_wbuf* FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*,int,void*,int,int,int ) ;
 int FUNC_8 (struct ubifs_info*,void*,TYPE_1__*) ;

int FUNC_9(struct ubifs_info *VAR_3, struct bu_info *VAR_4)
{
 int VAR_5 = VAR_4->zbranch[0].lnum, VAR_6 = VAR_4->zbranch[0].offs, VAR_7, VAR_8, VAR_9;
 struct ubifs_wbuf *VAR_10;
 void *VAR_11;

 VAR_7 = VAR_4->zbranch[VAR_4->cnt - 1].offs;
 VAR_7 += VAR_4->zbranch[VAR_4->cnt - 1].len - VAR_6;
 if (VAR_7 > VAR_4->buf_len) {
  FUNC_5(VAR_3, "buffer too small %d vs %d", VAR_4->buf_len, VAR_7);
  return -VAR_2;
 }


 VAR_10 = FUNC_6(VAR_3, VAR_5);
 if (VAR_10)
  VAR_8 = FUNC_4(VAR_10, VAR_4->buf, VAR_7, VAR_5, VAR_6);
 else
  VAR_8 = FUNC_7(VAR_3, VAR_5, VAR_4->buf, VAR_6, VAR_7, 0);


 if (FUNC_3(VAR_3, VAR_5, VAR_4->gc_seq))
  return -VAR_0;

 if (VAR_8 && VAR_8 != -VAR_1) {
  FUNC_5(VAR_3, "failed to read from LEB %d:%d, error %d",
     VAR_5, VAR_6, VAR_8);
  FUNC_2();
  FUNC_1(&VAR_4->key, "key ");
  return VAR_8;
 }


 VAR_11 = VAR_4->buf;
 for (VAR_9 = 0; VAR_9 < VAR_4->cnt; VAR_9++) {
  VAR_8 = FUNC_8(VAR_3, VAR_11, &VAR_4->zbranch[VAR_9]);
  if (VAR_8)
   return VAR_8;
  VAR_11 = VAR_11 + FUNC_0(VAR_4->zbranch[VAR_9].len, 8);
 }

 return 0;
}
