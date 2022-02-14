
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int nr_chans; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*) ;
 int FUNC_4 (struct solo_dev*) ;
 int FUNC_5 (struct solo_dev*,int ,int ) ;

int FUNC_6(struct solo_dev *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_chans; VAR_1++) {
  FUNC_5(VAR_0, FUNC_1(VAR_1), 0);
  FUNC_5(VAR_0, FUNC_0(VAR_1), 0);
 }

 return 0;
}
