
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lnum; int offs; int buf; int lock; struct ubifs_info* c; } ;
struct ubifs_info {int leb_cnt; int leb_size; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info const*,int) ;
 int FUNC_5 (struct ubifs_info const*,int,void*,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct ubifs_wbuf *VAR_0, void *VAR_1, int VAR_2, int VAR_3,
       int VAR_4)
{
 const struct ubifs_info *VAR_5 = VAR_0->c;
 int VAR_6, VAR_7;

 FUNC_0("LEB %d:%d, length %d", VAR_3, VAR_4, VAR_2);
 FUNC_4(VAR_5, VAR_0 && VAR_3 >= 0 && VAR_3 < VAR_5->leb_cnt && VAR_4 >= 0);
 FUNC_4(VAR_5, !(VAR_4 & 7) && VAR_4 < VAR_5->leb_size);
 FUNC_4(VAR_5, VAR_4 + VAR_2 <= VAR_5->leb_size);

 FUNC_2(&VAR_0->lock);
 VAR_7 = (VAR_3 == VAR_0->lnum && VAR_4 + VAR_2 > VAR_0->offs);
 if (!VAR_7) {

  FUNC_3(&VAR_0->lock);
  return FUNC_5(VAR_5, VAR_3, VAR_1, VAR_4, VAR_2, 0);
 }


 VAR_6 = VAR_0->offs - VAR_4;
 if (VAR_6 < 0)
  VAR_6 = 0;


 FUNC_1(VAR_1 + VAR_6, VAR_0->buf + VAR_4 + VAR_6 - VAR_0->offs, VAR_2 - VAR_6);
 FUNC_3(&VAR_0->lock);

 if (VAR_6 > 0)

  return FUNC_5(VAR_5, VAR_3, VAR_1, VAR_4, VAR_6, 0);

 return 0;
}
