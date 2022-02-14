
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hspi_priv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hspi_priv*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hspi_priv *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5 = 256;

 while (VAR_5--) {
  if ((VAR_3 & FUNC_1(VAR_2, VAR_1)) == VAR_4)
   return 0;

  FUNC_2(10);
 }

 FUNC_0(VAR_2->dev, "timeout\n");
 return -VAR_0;
}
