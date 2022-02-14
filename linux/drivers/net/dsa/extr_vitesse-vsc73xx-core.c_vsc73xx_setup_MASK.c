
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsc73xx {int dev; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 scalar_t__ FUNC_0 (struct vsc73xx*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct vsc73xx*,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_20)
{
 struct vsc73xx *VAR_21 = VAR_20->priv;
 int VAR_22;

 FUNC_1(VAR_21->dev, "set up the switch\n");


 FUNC_6(VAR_21, VAR_3, 0, VAR_4,
        VAR_5);
 FUNC_5(125, 200);
 for (VAR_22 = 0; VAR_22 <= 15; VAR_22++) {
  if (VAR_22 != 6 && VAR_22 != 7) {
   FUNC_6(VAR_21, VAR_2,
          2,
          0, 0x1010400 + VAR_22);
   FUNC_2(1);
  }
 }
 FUNC_2(30);


 FUNC_6(VAR_21, VAR_0, 0,
        VAR_11,
        VAR_12);


 FUNC_6(VAR_21, VAR_0, 0,
        VAR_18,
        VAR_19);

 FUNC_3(40);






 if (FUNC_0(VAR_21))
  FUNC_6(VAR_21, VAR_1, 0x1f,
         VAR_15,
         VAR_16);


 for (VAR_22 = 0; VAR_22 < 7; VAR_22++) {
  if (VAR_22 == 5)
   continue;
  FUNC_6(VAR_21, VAR_1, 4,
         VAR_13, VAR_14);
 }


 FUNC_6(VAR_21, VAR_3, 0, VAR_7,
        VAR_8 |
        VAR_9);

 FUNC_6(VAR_21, VAR_0, 0, VAR_17,
        0x5f);

 FUNC_6(VAR_21, VAR_0, 0, VAR_10,
        0xff);

 FUNC_2(50);


 FUNC_6(VAR_21, VAR_3, 0, VAR_4,
        VAR_6);

 FUNC_4(4);

 return 0;
}
