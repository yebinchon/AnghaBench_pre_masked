
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdx_priv {int ndev; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bdx_priv*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct bdx_priv*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
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

__attribute__((used)) static int FUNC_6(struct bdx_priv *VAR_13)
{
 int VAR_14;

 VAR_0;


 FUNC_3(VAR_13, VAR_4, 0);
 FUNC_4(100);

 FUNC_3(VAR_13, VAR_2, 1);

 FUNC_3(VAR_13, VAR_3, 1);

 for (VAR_14 = 0; VAR_14 < 50; VAR_14++) {
  if (FUNC_1(VAR_13, VAR_8) & 1)
   break;
  FUNC_4(10);
 }
 if (VAR_14 == 50)
  FUNC_5(VAR_13->ndev, "SW reset timeout. continuing anyway\n");


 FUNC_3(VAR_13, VAR_7, 0);
 FUNC_3(VAR_13, VAR_10, 0);
 FUNC_3(VAR_13, VAR_5, 0);
 FUNC_1(VAR_13, VAR_6);


 FUNC_3(VAR_13, VAR_9, 1);

 FUNC_3(VAR_13, VAR_8, 1);

 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_0("%x = %x\n", VAR_14, FUNC_1(VAR_13, VAR_14) & VAR_1);
 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_3(VAR_13, VAR_14, 0);

 FUNC_3(VAR_13, VAR_2, 0);

 FUNC_3(VAR_13, VAR_3, 0);

 FUNC_3(VAR_13, VAR_9, 0);

 FUNC_3(VAR_13, VAR_8, 0);



 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14 += 0x10)
  FUNC_0("%x = %x\n", VAR_14, FUNC_1(VAR_13, VAR_14) & VAR_1);

 FUNC_2(0);
}
