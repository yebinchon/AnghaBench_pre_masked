
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_rx_desc {int dummy; } ;
struct mvpp2_port {int dev; } ;


 int VAR_0 ;



 size_t FUNC_0 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 int FUNC_1 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,int,char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_1,
      struct mvpp2_rx_desc *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1, VAR_2);
 size_t VAR_4 = FUNC_0(VAR_1, VAR_2);
 char *VAR_5 = ((void*)0);

 switch (VAR_3 & VAR_0) {
 case 130:
  VAR_5 = "crc";
  break;
 case 129:
  VAR_5 = "overrun";
  break;
 case 128:
  VAR_5 = "resource";
  break;
 }
 if (VAR_5 && FUNC_2())
  FUNC_3(VAR_1->dev,
      "bad rx status %08x (%s error), size=%zu\n",
      VAR_3, VAR_5, VAR_4);
}
