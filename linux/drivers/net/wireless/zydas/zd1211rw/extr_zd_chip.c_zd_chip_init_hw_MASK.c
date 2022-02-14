
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int mutex; int rf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct zd_chip*) ;
 int FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_chip*) ;
 int FUNC_8 (struct zd_chip*) ;
 int FUNC_9 (struct zd_chip*) ;
 int FUNC_10 (struct zd_chip*,int *) ;
 int FUNC_11 (struct zd_chip*,int) ;
 int FUNC_12 (struct zd_chip*) ;
 int FUNC_13 (struct zd_chip*) ;
 int FUNC_14 (struct zd_chip*,int,int ) ;
 int FUNC_15 (int *,int ) ;

int FUNC_16(struct zd_chip *VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 FUNC_0(FUNC_13(VAR_4), "\n");

 FUNC_4(&VAR_4->mutex);






 VAR_5 = FUNC_14(VAR_4, 1, VAR_0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5)
  goto out;



 VAR_5 = FUNC_14(VAR_4, 0, VAR_2);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_14(VAR_4, VAR_3, VAR_1);
 if (VAR_5)
  goto out;




 VAR_5 = FUNC_11(VAR_4, 1);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_10(VAR_4, &VAR_6);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_15(&VAR_4->rf, VAR_6);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5)
  goto out;

 FUNC_7(VAR_4);
out:
 FUNC_5(&VAR_4->mutex);
 return VAR_5;
}
