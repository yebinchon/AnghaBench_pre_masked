
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lnum; int offs; int buf; int lock; int jhead; struct ubifs_info* c; } ;
struct ubifs_info {int leb_cnt; int leb_size; } ;
struct ubifs_ch {int node_type; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info const*,int) ;
 int FUNC_9 (struct ubifs_info const*,void*,int,int,int ,int ) ;
 int FUNC_10 (struct ubifs_info const*,void*) ;
 int FUNC_11 (struct ubifs_info const*,char*,int,...) ;
 int FUNC_12 (struct ubifs_info const*,int,void*,int,int,int ) ;
 int FUNC_13 (struct ubifs_info const*,void*,int,int,int,int) ;

int FUNC_14(struct ubifs_wbuf *VAR_3, void *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8)
{
 const struct ubifs_info *VAR_9 = VAR_3->c;
 int VAR_10, VAR_11, VAR_12;
 struct ubifs_ch *VAR_13 = VAR_4;

 FUNC_0("LEB %d:%d, %s, length %d, jhead %s", VAR_7, VAR_8,
        FUNC_2(VAR_5), VAR_6, FUNC_1(VAR_3->jhead));
 FUNC_8(VAR_9, VAR_3 && VAR_7 >= 0 && VAR_7 < VAR_9->leb_cnt && VAR_8 >= 0);
 FUNC_8(VAR_9, !(VAR_8 & 7) && VAR_8 < VAR_9->leb_size);
 FUNC_8(VAR_9, VAR_5 >= 0 && VAR_5 < VAR_2);

 FUNC_6(&VAR_3->lock);
 VAR_12 = (VAR_7 == VAR_3->lnum && VAR_8 + VAR_6 > VAR_3->offs);
 if (!VAR_12) {

  FUNC_7(&VAR_3->lock);
  return FUNC_13(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 }


 VAR_11 = VAR_3->offs - VAR_8;
 if (VAR_11 < 0)
  VAR_11 = 0;


 FUNC_5(VAR_4 + VAR_11, VAR_3->buf + VAR_8 + VAR_11 - VAR_3->offs, VAR_6 - VAR_11);
 FUNC_7(&VAR_3->lock);

 if (VAR_11 > 0) {

  VAR_10 = FUNC_12(VAR_9, VAR_7, VAR_4, VAR_8, VAR_11, 0);
  if (VAR_10 && VAR_10 != -VAR_0)
   return VAR_10;
 }

 if (VAR_5 != VAR_13->node_type) {
  FUNC_11(VAR_9, "bad node type (%d but expected %d)",
     VAR_13->node_type, VAR_5);
  goto out;
 }

 VAR_10 = FUNC_9(VAR_9, VAR_4, VAR_7, VAR_8, 0, 0);
 if (VAR_10) {
  FUNC_11(VAR_9, "expected node type %d", VAR_5);
  return VAR_10;
 }

 VAR_11 = FUNC_4(VAR_13->len);
 if (VAR_11 != VAR_6) {
  FUNC_11(VAR_9, "bad node length %d, expected %d", VAR_11, VAR_6);
  goto out;
 }

 return 0;

out:
 FUNC_11(VAR_9, "bad node at LEB %d:%d", VAR_7, VAR_8);
 FUNC_10(VAR_9, VAR_4);
 FUNC_3();
 return -VAR_1;
}
