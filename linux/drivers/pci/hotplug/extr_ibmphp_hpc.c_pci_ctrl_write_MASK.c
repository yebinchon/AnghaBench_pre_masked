
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct controller {scalar_t__ ctrl_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct controller *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = -VAR_0;
 FUNC_0("inside pci_ctrl_write\n");
 if (VAR_2->ctrl_dev) {
  FUNC_1(VAR_2->ctrl_dev, VAR_1 + VAR_3, VAR_4);
  VAR_5 = 0;
 }
 return VAR_5;
}
