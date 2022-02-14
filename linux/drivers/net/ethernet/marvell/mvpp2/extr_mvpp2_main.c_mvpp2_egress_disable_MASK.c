
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int priv; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct mvpp2_port *VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_5);


 FUNC_3(VAR_5->priv, VAR_2, VAR_8);
 VAR_6 = (FUNC_2(VAR_5->priv, VAR_3)) &
      VAR_1;
 if (VAR_6 != 0)
  FUNC_3(VAR_5->priv, VAR_3,
       (VAR_6 << VAR_0));


 VAR_7 = 0;
 do {
  if (VAR_7 >= VAR_4) {
   FUNC_4(VAR_5->dev,
        "Tx stop timed out, status=0x%08x\n",
        VAR_6);
   break;
  }
  FUNC_0(1);
  VAR_7++;




  VAR_6 = FUNC_2(VAR_5->priv, VAR_3);
 } while (VAR_6 & VAR_1);
}
