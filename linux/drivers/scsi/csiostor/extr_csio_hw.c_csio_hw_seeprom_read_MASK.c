
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int vpd_cap_addr; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;
struct csio_hw {int pdev; TYPE_2__ params; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct csio_hw*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct csio_hw *VAR_6, uint32_t VAR_7, uint32_t *VAR_8)
{
 uint16_t VAR_9 = 0;
 int VAR_10 = VAR_1;
 uint32_t VAR_11 = VAR_6->params.pci.vpd_cap_addr;

 if (VAR_7 >= VAR_0 || (VAR_7 & 3))
  return -VAR_2;

 FUNC_4(VAR_6->pdev, VAR_11 + VAR_3, (uint16_t)VAR_7);

 do {
  FUNC_5(10);
  FUNC_3(VAR_6->pdev, VAR_11 + VAR_3, &VAR_9);
 } while (!(VAR_9 & VAR_4) && --VAR_10);

 if (!(VAR_9 & VAR_4)) {
  FUNC_0(VAR_6, "reading EEPROM address 0x%x failed\n", VAR_7);
  return -VAR_2;
 }

 FUNC_2(VAR_6->pdev, VAR_11 + VAR_5, VAR_8);
 *VAR_8 = FUNC_1(*(__le32 *)VAR_8);

 return 0;
}
