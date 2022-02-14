
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {scalar_t__ device; } ;
struct mlxsw_pci {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct mlxsw_pci*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_9 ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_pci *VAR_10,
         const struct pci_device_id *VAR_11)
{
 unsigned long VAR_12;
 char VAR_13[VAR_6];
 int VAR_14;

 FUNC_3(VAR_13);
 VAR_14 = FUNC_4(VAR_10->core, FUNC_0(VAR_9), VAR_13);
 if (VAR_14)
  return VAR_14;
 if (VAR_11->device == VAR_7) {
  FUNC_6(VAR_4);
  return 0;
 }


 FUNC_6(VAR_5);

 VAR_12 = VAR_8 + FUNC_5(VAR_4);
 do {
  u32 VAR_15 = FUNC_2(VAR_10, VAR_1);

  if ((VAR_15 & VAR_3) == VAR_2)
   return 0;
  FUNC_1();
 } while (FUNC_7(VAR_8, VAR_12));
 return -VAR_0;
}
