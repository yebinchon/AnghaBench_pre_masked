
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_device {scalar_t__ num_oqs; int ** droq; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 scalar_t__ FUNC_5 (struct octeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct octeon_device*,size_t,size_t,size_t,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int) ;
 int * FUNC_10 (int,int) ;

int FUNC_11(struct octeon_device *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 int VAR_7 = FUNC_6(&VAR_3->pci_dev->dev);

 if (FUNC_5(VAR_3)) {
  VAR_4 =
   FUNC_1(FUNC_2(VAR_3, VAR_2));
  VAR_5 =
   FUNC_0(FUNC_2(VAR_3, VAR_2));
 } else if (FUNC_3(VAR_3)) {
  VAR_4 = FUNC_1(FUNC_2(VAR_3, VAR_0));
  VAR_5 = FUNC_0(FUNC_2(VAR_3, VAR_0));
 } else if (FUNC_4(VAR_3)) {
  VAR_4 = FUNC_1(FUNC_2(VAR_3, VAR_1));
  VAR_5 = FUNC_0(FUNC_2(VAR_3, VAR_1));
 }
 VAR_3->num_oqs = 0;
 VAR_3->droq[0] = FUNC_10(sizeof(*VAR_3->droq[0]), VAR_7);
 if (!VAR_3->droq[0])
  VAR_3->droq[0] = FUNC_9(sizeof(*VAR_3->droq[0]));
 if (!VAR_3->droq[0])
  return 1;

 if (FUNC_7(VAR_3, VAR_6, VAR_4, VAR_5, ((void*)0))) {
  FUNC_8(VAR_3->droq[VAR_6]);
  VAR_3->droq[VAR_6] = ((void*)0);
  return 1;
 }
 VAR_3->num_oqs++;

 return 0;
}
