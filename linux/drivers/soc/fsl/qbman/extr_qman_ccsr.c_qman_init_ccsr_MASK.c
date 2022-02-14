
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_12)
{
 int VAR_13, VAR_14;


 VAR_14 = FUNC_5(VAR_8, VAR_2, VAR_3);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_9, VAR_4, VAR_5);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_14 == 0) {
  VAR_14 = FUNC_1(VAR_12, 8, VAR_5 / 64 - 8);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_6(512, 64);
 FUNC_7(128);

 FUNC_0(VAR_1, VAR_0);

 FUNC_2();

 FUNC_4();

 for (VAR_13 = VAR_10; VAR_13 <= VAR_11; VAR_13++)
  FUNC_8(VAR_13, 0, 0, 0, 0, 0, 0, 0);

 FUNC_3(VAR_6, 1, 0);
 FUNC_3(VAR_7, 1, 0);
 return 0;
}
