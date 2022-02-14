
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3);
 if (VAR_5)
  goto failed_keys;

 VAR_5 = FUNC_0(&VAR_2);
 if (VAR_5)
  goto failed_bl;

 VAR_5 = FUNC_0(&VAR_4);
 if (VAR_5)
  goto failed_tablet;

 VAR_5 = FUNC_0(&VAR_0);
 if (VAR_5)
  goto failed_accel;

 VAR_5 = FUNC_0(&VAR_1);
 if (VAR_5)
  goto failed_accel_v4;

 return VAR_5;

failed_accel_v4:
 FUNC_1(&VAR_0);

failed_accel:
 FUNC_1(&VAR_4);

failed_tablet:
 FUNC_1(&VAR_2);

failed_bl:
 FUNC_1(&VAR_3);

failed_keys:
 return VAR_5;
}
