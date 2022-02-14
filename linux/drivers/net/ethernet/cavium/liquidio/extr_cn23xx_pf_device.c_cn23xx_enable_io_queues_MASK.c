
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int iq64B; int iq; int oq; } ;
struct TYPE_4__ {scalar_t__ pf_srn; } ;
struct octeon_device {scalar_t__ num_iqs; TYPE_3__ io_qmask; TYPE_2__* pci_dev; TYPE_1__ sriov_info; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct octeon_device *VAR_5)
{
 u64 VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = 1000;

 VAR_7 = VAR_5->sriov_info.pf_srn;
 VAR_8 = VAR_7 + VAR_5->num_iqs;

 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {

  if (VAR_5->io_qmask.iq64B & FUNC_0(VAR_9 - VAR_7)) {
   VAR_6 = FUNC_5(
       VAR_5, FUNC_1(VAR_9));
   VAR_6 = VAR_6 | VAR_0;
   FUNC_7(
       VAR_5, FUNC_1(VAR_9), VAR_6);
  }


  if (VAR_5->io_qmask.iq & FUNC_0(VAR_9 - VAR_7)) {



   VAR_6 = FUNC_5(
       VAR_5, FUNC_1(VAR_9));

   if (VAR_6 & VAR_3) {
    while ((VAR_6 & VAR_3) &&
           !(VAR_6 &
      VAR_1) &&
           --VAR_10) {
     VAR_6 = FUNC_5(
         VAR_5,
         FUNC_1(VAR_9));
    }
    if (!VAR_10) {
     FUNC_3(&VAR_5->pci_dev->dev,
      "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
      VAR_9);
     return -1;
    }
    VAR_6 = VAR_6 & ~VAR_3;
    FUNC_7(
        VAR_5, FUNC_1(VAR_9),
        VAR_6);

    VAR_6 = FUNC_5(
        VAR_5, FUNC_1(VAR_9));
    if (VAR_6 & VAR_3) {
     FUNC_3(&VAR_5->pci_dev->dev,
      "clearing the reset failed for qno: %u\n",
      VAR_9);
     return -1;
    }
   }
   VAR_6 = FUNC_5(
       VAR_5, FUNC_1(VAR_9));
   VAR_6 = VAR_6 | VAR_2;
   FUNC_7(
       VAR_5, FUNC_1(VAR_9), VAR_6);
  }
 }
 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
  u32 VAR_11;

  if (VAR_5->io_qmask.oq & FUNC_0(VAR_9 - VAR_7)) {
   VAR_11 = FUNC_4(
       VAR_5, FUNC_2(VAR_9));
   VAR_11 = VAR_11 | VAR_4;
   FUNC_6(VAR_5, FUNC_2(VAR_9),
      VAR_11);
  }
 }
 return 0;
}
