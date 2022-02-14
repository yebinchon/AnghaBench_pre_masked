
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 FUNC_4(&VAR_2);

 VAR_7 = FUNC_3(&VAR_3);
 if (FUNC_0(VAR_7 < 1)) {
  VAR_6 = -VAR_0;
  goto exit;
 }
 if (VAR_5 > VAR_4) {
  VAR_6 = -VAR_1;
  goto exit;
 }

 if (VAR_7 == 1)
  VAR_6 = FUNC_1();
exit:
 if (VAR_6)
  FUNC_2(&VAR_3);

 FUNC_5(&VAR_2);

 return VAR_6;
}
