
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {unsigned int vpd_cap_addr; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;
struct adapter {int pdev; TYPE_2__ params; } ;
typedef int __le32 ;


 int FUNC_0 (struct adapter*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;

int FUNC_6(struct adapter *VAR_8, u32 VAR_9, __le32 VAR_10)
{
 u16 VAR_11;
 int VAR_12 = VAR_1;
 unsigned int VAR_13 = VAR_8->params.pci.vpd_cap_addr;

 if ((VAR_9 >= VAR_0 && VAR_9 != VAR_2) || (VAR_9 & 3))
  return -VAR_3;

 FUNC_4(VAR_8->pdev, VAR_13 + VAR_7,
          FUNC_1(VAR_10));
 FUNC_5(VAR_8->pdev,VAR_13 + VAR_5,
         VAR_9 | VAR_6);
 do {
  FUNC_2(1);
  FUNC_3(VAR_8->pdev, VAR_13 + VAR_5, &VAR_11);
 } while ((VAR_11 & VAR_6) && --VAR_12);

 if (VAR_11 & VAR_6) {
  FUNC_0(VAR_8, "write to EEPROM address 0x%x failed\n", VAR_9);
  return -VAR_4;
 }
 return 0;
}
