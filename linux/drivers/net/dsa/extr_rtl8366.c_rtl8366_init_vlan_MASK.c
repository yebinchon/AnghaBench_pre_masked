
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct realtek_smi {int num_ports; int cpu_port; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct realtek_smi*,int) ;
 int FUNC_4 (struct realtek_smi*) ;
 int FUNC_5 (struct realtek_smi*,int,int) ;
 int FUNC_6 (struct realtek_smi*,int,int,int,int ) ;

int FUNC_7(struct realtek_smi *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;




 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
  u32 VAR_3;

  if (VAR_1 == VAR_0->cpu_port)



   VAR_3 = FUNC_1(VAR_0->num_ports - 1, 0);
  else



   VAR_3 = FUNC_0(VAR_1) | FUNC_0(VAR_0->cpu_port);






  FUNC_2(VAR_0->dev, "VLAN%d port mask for port %d, %08x\n",
    (VAR_1 + 1), VAR_1, VAR_3);
  VAR_2 = FUNC_6(VAR_0, (VAR_1 + 1), VAR_3, VAR_3, 0);
  if (VAR_2)
   return VAR_2;

  FUNC_2(VAR_0->dev, "VLAN%d port %d, PVID set to %d\n",
    (VAR_1 + 1), VAR_1, (VAR_1 + 1));
  VAR_2 = FUNC_5(VAR_0, VAR_1, (VAR_1 + 1));
  if (VAR_2)
   return VAR_2;
 }

 return FUNC_3(VAR_0, 1);
}
