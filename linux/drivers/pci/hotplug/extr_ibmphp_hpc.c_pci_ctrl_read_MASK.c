
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct controller {scalar_t__ ctrl_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int,int*) ;

__attribute__((used)) static u8 FUNC_2(struct controller *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = 0x00;
 FUNC_0("inside pci_ctrl_read\n");
 if (VAR_1->ctrl_dev)
  FUNC_1(VAR_1->ctrl_dev, VAR_0 + VAR_2, &VAR_3);
 return VAR_3;
}
