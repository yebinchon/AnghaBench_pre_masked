
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int ftid_lock; int ftid_bmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct tid_info *VAR_3, int VAR_4, int VAR_5,
     unsigned int VAR_6)
{
 FUNC_2(&VAR_3->ftid_lock);

 if (FUNC_4(VAR_4, VAR_3->ftid_bmap)) {
  FUNC_3(&VAR_3->ftid_lock);
  return -VAR_1;
 }

 if (VAR_5 == VAR_2) {
  FUNC_0(VAR_4, VAR_3->ftid_bmap);
 } else {
  if (VAR_6 < VAR_0)
   FUNC_1(VAR_3->ftid_bmap, VAR_4, 2);
  else
   FUNC_1(VAR_3->ftid_bmap, VAR_4, 1);
 }

 FUNC_3(&VAR_3->ftid_lock);
 return 0;
}
