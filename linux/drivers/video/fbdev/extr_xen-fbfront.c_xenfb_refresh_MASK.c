
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_info {int y1; int y2; int x1; int x2; int dirty_lock; int update_wanted; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xenfb_info*,int,int,int,int) ;
 int FUNC_3 (struct xenfb_info*) ;
 scalar_t__ FUNC_4 (struct xenfb_info*) ;

__attribute__((used)) static void FUNC_5(struct xenfb_info *VAR_1,
     int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = VAR_2 + VAR_4 - 1;
 int VAR_8 = VAR_3 + VAR_5 - 1;

 FUNC_3(VAR_1);

 if (!VAR_1->update_wanted)
  return;

 FUNC_0(&VAR_1->dirty_lock, VAR_6);


 if (VAR_1->y1 < VAR_3)
  VAR_3 = VAR_1->y1;
 if (VAR_1->y2 > VAR_8)
  VAR_8 = VAR_1->y2;
 if (VAR_1->x1 < VAR_2)
  VAR_2 = VAR_1->x1;
 if (VAR_1->x2 > VAR_7)
  VAR_7 = VAR_1->x2;

 if (FUNC_4(VAR_1)) {

  VAR_1->x1 = VAR_2;
  VAR_1->x2 = VAR_7;
  VAR_1->y1 = VAR_3;
  VAR_1->y2 = VAR_8;
  FUNC_1(&VAR_1->dirty_lock, VAR_6);
  return;
 }


 VAR_1->x1 = VAR_1->y1 = VAR_0;
 VAR_1->x2 = VAR_1->y2 = 0;

 FUNC_1(&VAR_1->dirty_lock, VAR_6);

 if (VAR_2 <= VAR_7 && VAR_3 <= VAR_8)
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_7 - VAR_2 + 1, VAR_8 - VAR_3 + 1);
}
