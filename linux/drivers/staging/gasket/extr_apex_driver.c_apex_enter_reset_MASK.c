
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gasket_dev*,int,int ,int ) ;
 int FUNC_3 (struct gasket_dev*,int ,int ,int,int,int) ;
 int FUNC_4 (struct gasket_dev*,int ,int ,int,int,int) ;
 scalar_t__ FUNC_5 (struct gasket_dev*,int ,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct gasket_dev *VAR_10)
{
 if (VAR_9)
  return 0;







 FUNC_4(VAR_10, VAR_5,
        VAR_0,
        0x0, 1, 32);


 FUNC_2(VAR_10, 1, VAR_5,
       VAR_3);


 if (FUNC_5(VAR_10, VAR_5,
     VAR_4, 1, 1,
     VAR_6, VAR_7)) {
  FUNC_1(VAR_10->dev,
   "DMAs did not quiesce within timeout (%d ms)\n",
   VAR_7 * VAR_6);
  return -VAR_8;
 }


 FUNC_3(VAR_10, VAR_5,
        VAR_1, 0x1, 2, 2);


 FUNC_3(VAR_10, VAR_5,
        VAR_1, 0x1, 2, 18);


 FUNC_3(VAR_10, VAR_5,
        VAR_2, 0x3, 2, 14);


 if (FUNC_5(VAR_10, VAR_5,
     VAR_2, FUNC_0(6), FUNC_0(6),
     VAR_6, VAR_7)) {
  FUNC_1(VAR_10->dev,
   "RAM did not shut down within timeout (%d ms)\n",
   VAR_7 * VAR_6);
  return -VAR_8;
 }

 return 0;
}
