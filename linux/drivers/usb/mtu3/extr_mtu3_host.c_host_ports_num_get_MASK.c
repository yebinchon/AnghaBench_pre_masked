
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssusb_mtk {int u3_ports; int u2_ports; int dev; int ippc_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ssusb_mtk *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_3(VAR_1->ippc_base, VAR_0);
 VAR_1->u2_ports = FUNC_0(VAR_2);
 VAR_1->u3_ports = FUNC_1(VAR_2);

 FUNC_2(VAR_1->dev, "host - u2_ports:%d, u3_ports:%d\n",
   VAR_1->u2_ports, VAR_1->u3_ports);
}
