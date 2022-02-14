
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct pcnet32_private {int* save_regs; int lock; struct pcnet32_access* a; } ;
struct pcnet32_access {int (* read_bcr ) (int ,int) ;int (* write_bcr ) (int ,int,int) ;} ;
struct net_device {int base_addr; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0,
          enum ethtool_phys_id_state VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_0(VAR_0);
 const struct pcnet32_access *VAR_3 = VAR_2->a;
 ulong VAR_4 = VAR_0->base_addr;
 unsigned long VAR_5;
 int VAR_6;

 switch (VAR_1) {
 case 131:

  FUNC_1(&VAR_2->lock, VAR_5);
  for (VAR_6 = 4; VAR_6 < 8; VAR_6++)
   VAR_2->save_regs[VAR_6 - 4] = VAR_3->read_bcr(VAR_4, VAR_6);
  FUNC_2(&VAR_2->lock, VAR_5);
  return 2;

 case 128:
 case 129:

  FUNC_1(&VAR_2->lock, VAR_5);
  for (VAR_6 = 4; VAR_6 < 8; VAR_6++)
   VAR_3->write_bcr(VAR_4, VAR_6, VAR_3->read_bcr(VAR_4, VAR_6) ^ 0x4000);
  FUNC_2(&VAR_2->lock, VAR_5);
  break;

 case 130:

  FUNC_1(&VAR_2->lock, VAR_5);
  for (VAR_6 = 4; VAR_6 < 8; VAR_6++)
   VAR_3->write_bcr(VAR_4, VAR_6, VAR_2->save_regs[VAR_6 - 4]);
  FUNC_2(&VAR_2->lock, VAR_5);
 }
 return 0;
}
