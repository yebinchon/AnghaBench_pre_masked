
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_auart_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,struct mxs_auart_port*,int ) ;
 int FUNC_2 (struct mxs_auart_port*,int ) ;
 int FUNC_3 (int,struct mxs_auart_port*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mxs_auart_port *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2);

 if (VAR_5 & VAR_1)
  return;

 FUNC_1(VAR_0, VAR_3, VAR_2);
 FUNC_3(VAR_1, VAR_3, VAR_2);

 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  VAR_5 = FUNC_2(VAR_3, VAR_2);

  if (VAR_5 & VAR_0)
   return;
  FUNC_4(10);
 }

 FUNC_0(VAR_3->dev, "Failed to reset the unit.");
}
