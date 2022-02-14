
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
typedef enum pqi_soft_reset_status { ____Placeholder_pqi_soft_reset_status } pqi_soft_reset_status ;
struct TYPE_2__ {int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_9 ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static enum pqi_soft_reset_status FUNC_5(
 struct pqi_ctrl_info *VAR_10)
{
 unsigned long VAR_11;
 u8 VAR_12;

 VAR_11 = (VAR_4 * VAR_0) + VAR_9;

 while (1) {
  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12 & VAR_2)
   return VAR_6;

  if (VAR_12 & VAR_1)
   return VAR_5;

  if (FUNC_4(VAR_9, VAR_11)) {
   FUNC_0(&VAR_10->pci_dev->dev,
    "timed out waiting for soft reset status\n");
   return VAR_8;
  }

  if (!FUNC_2(VAR_10))
   return VAR_7;

  FUNC_3(VAR_3);
 }
}
