
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct octeon_device *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_0;
 int VAR_6 = 0;
 u32 VAR_7;
 u64 VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {

  VAR_8 = FUNC_4(VAR_3,
     FUNC_0(VAR_7));
  VAR_8 |= VAR_2;
  FUNC_5(VAR_3, FUNC_0(VAR_7),
       VAR_8);
 }


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  u64 VAR_9 = FUNC_4(VAR_3,
     FUNC_0(VAR_7));
  while ((FUNC_1(VAR_9) & VAR_2) &&
         !(FUNC_1(VAR_9) & VAR_1) &&
         VAR_5) {
   FUNC_2(VAR_9, FUNC_4(
       VAR_3, FUNC_0(VAR_7)));
   VAR_5--;
  }
  if (!VAR_5) {
   FUNC_3(&VAR_3->pci_dev->dev,
    "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
    VAR_7);
   return -1;
  }
  FUNC_2(VAR_9, FUNC_1(VAR_9) &
      ~VAR_2);
  FUNC_5(VAR_3, FUNC_0(VAR_7),
       FUNC_1(VAR_9));

  FUNC_2(VAR_9, FUNC_4(
      VAR_3, FUNC_0(VAR_7)));
  if (FUNC_1(VAR_9) & VAR_2) {
   FUNC_3(&VAR_3->pci_dev->dev,
    "clearing the reset failed for qno: %u\n",
    VAR_7);
   VAR_6 = -1;
  }
 }

 return VAR_6;
}
