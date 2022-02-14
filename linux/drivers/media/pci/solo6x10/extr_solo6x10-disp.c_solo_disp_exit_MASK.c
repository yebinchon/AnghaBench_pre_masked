
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int nr_chans; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (struct solo_dev*,int ,int ) ;

void FUNC_9(struct solo_dev *VAR_5)
{
 int VAR_6;

 FUNC_8(VAR_5, VAR_2, 0);
 FUNC_8(VAR_5, VAR_4, 0);
 FUNC_8(VAR_5, VAR_3, 0);

 for (VAR_6 = 0; VAR_6 < VAR_5->nr_chans; VAR_6++) {
  FUNC_8(VAR_5, FUNC_0(VAR_6), 0);
  FUNC_8(VAR_5, FUNC_1(VAR_6), 0);
  FUNC_8(VAR_5, FUNC_2(VAR_6), 0);
 }


 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  FUNC_8(VAR_5, FUNC_3(VAR_6), 0);

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  FUNC_8(VAR_5, FUNC_4(VAR_6), 0);

 FUNC_8(VAR_5, VAR_1, 0);
 FUNC_8(VAR_5, VAR_0, 0);

 FUNC_8(VAR_5, FUNC_5(0), 0);
 FUNC_8(VAR_5, FUNC_6(0), 0);
 FUNC_8(VAR_5, FUNC_7(0), 0);

 FUNC_8(VAR_5, FUNC_5(1), 0);
 FUNC_8(VAR_5, FUNC_6(1), 0);
 FUNC_8(VAR_5, FUNC_7(1), 0);
}
