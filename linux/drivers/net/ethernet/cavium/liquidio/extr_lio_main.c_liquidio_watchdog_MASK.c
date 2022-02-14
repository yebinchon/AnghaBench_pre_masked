
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int vf_drv_loaded_mask; } ;
struct octeon_device {TYPE_2__ sriov_info; TYPE_1__* pci_dev; int cores_crashed; } ;
typedef int err_msg_was_printed ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct octeon_device*) ;
 struct octeon_device* FUNC_4 (struct octeon_device*) ;
 long FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int ) ;
 long FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct octeon_device*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(void *VAR_4)
{
 bool VAR_5[VAR_1];
 u16 VAR_6 = 0;
 bool VAR_7 = 0;
 struct octeon_device *VAR_8 = VAR_4;
 struct octeon_device *VAR_9;




 int VAR_10;

 FUNC_7(VAR_5, 0, sizeof(VAR_5));

 while (!FUNC_6()) {

  FUNC_13(VAR_2);
  FUNC_12(FUNC_10(2000));

  VAR_6 =
      (u16)FUNC_11(VAR_8, VAR_0);

  if (!VAR_6)
   continue;

  FUNC_1(VAR_8->cores_crashed, 1);
  VAR_9 = FUNC_4(VAR_8);
  if (VAR_9)
   FUNC_1(VAR_9->cores_crashed, 1);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   bool VAR_11;

   VAR_11 =
      (VAR_6
       >> VAR_10) & 1;

   if (VAR_11 &&
       !VAR_5[VAR_10]) {
    FUNC_2(&VAR_8->pci_dev->dev,
     "ERROR: Octeon core %d crashed or got stuck!  See oct-fwdump for details.\n",
     VAR_10);
    VAR_5[VAR_10] = 1;
   }
  }

  if (VAR_7)
   continue;

  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
  VAR_7 = 1;
 }

 return 0;
}
