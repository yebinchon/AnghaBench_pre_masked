
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ pf_srn; scalar_t__ num_pf_rings; } ;
struct octeon_device {TYPE_2__* pci_dev; TYPE_1__ sriov_info; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct octeon_device *VAR_2)
{
 int VAR_3 = 0;
 u64 VAR_4;
 u32 VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = 1000;

 VAR_6 = VAR_2->sriov_info.pf_srn;
 VAR_7 = VAR_6 + VAR_2->sriov_info.num_pf_rings;





 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++) {

  VAR_4 = FUNC_4(VAR_2, FUNC_0(VAR_5));
  VAR_4 = VAR_4 | VAR_1;
  FUNC_5(VAR_2, FUNC_0(VAR_5), VAR_4);
 }


 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++) {
  u64 VAR_9 = FUNC_4(VAR_2,
     FUNC_0(VAR_5));
  while ((FUNC_1(VAR_9) & VAR_1) &&
         !(FUNC_1(VAR_9) & VAR_0) &&
         VAR_8--) {
   FUNC_2(VAR_9, FUNC_4(
       VAR_2, FUNC_0(VAR_5)));
  }
  if (!VAR_8) {
   FUNC_3(&VAR_2->pci_dev->dev,
    "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
    VAR_5);
   return -1;
  }
  FUNC_2(VAR_9, FUNC_1(VAR_9) &
   ~VAR_1);
  FUNC_5(VAR_2, FUNC_0(VAR_5),
       FUNC_1(VAR_9));

  FUNC_2(VAR_9, FUNC_4(
      VAR_2, FUNC_0(VAR_5)));
  if (FUNC_1(VAR_9) & VAR_1) {
   FUNC_3(&VAR_2->pci_dev->dev,
    "clearing the reset failed for qno: %u\n",
    VAR_5);
   VAR_3 = -1;
  }
 }

 return VAR_3;
}
