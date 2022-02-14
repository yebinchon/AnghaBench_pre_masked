
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_device {TYPE_1__* pci_dev; struct octeon_console* console; } ;
struct octeon_console {char* leftover; scalar_t__ waiting; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,size_t,char*) ;
 int FUNC_1 (int *,char*,size_t,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct octeon_device*,size_t) ;
 int FUNC_6 (struct octeon_device*,size_t,char*,int) ;
 scalar_t__ FUNC_7 (struct octeon_device*,char*,int) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(struct octeon_device *VAR_2)
{
 s32 VAR_3, VAR_4, VAR_5;
 struct octeon_console *VAR_6;
 u32 VAR_7 = 0;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;


 VAR_9 = FUNC_4(512, VAR_0);
 if (!VAR_9)
  return;

 if (FUNC_7(VAR_2, "setenv stdout pci\n", 50)) {
  FUNC_3(VAR_9);
  return;
 }

 if (FUNC_7(VAR_2, "version\n", 1)) {
  FUNC_3(VAR_9);
  return;
 }

 VAR_6 = &VAR_2->console[VAR_7];
 VAR_4 = 0;
 VAR_5 = 0;

 do {



  VAR_3 =
   FUNC_6(VAR_2,
         VAR_7, VAR_9 + VAR_5,
         512 - 1 -
         VAR_5);
  if (VAR_3 > 0) {
   VAR_9[VAR_3] = '\0';

   VAR_5 += VAR_3;
   if (VAR_6->waiting)
    FUNC_5(VAR_2, VAR_7);
  } else if (VAR_3 < 0) {
   FUNC_1(&VAR_2->pci_dev->dev, "Error reading console %u, ret=%d\n",
    VAR_7, VAR_3);
  }

  VAR_4++;
 } while ((VAR_3 > 0) && (VAR_4 < 16));




 if ((VAR_5 == 0) && (VAR_6->leftover[0])) {
  FUNC_0(&VAR_2->pci_dev->dev, "%u: %s\n",
   VAR_7, VAR_6->leftover);
  VAR_6->leftover[0] = '\0';
 }

 VAR_9[512 - 1] = '\0';

 VAR_8 = FUNC_8(VAR_9, "U-Boot");
 if (VAR_8) {
  VAR_10 = FUNC_8(VAR_8, "mips");
  if (VAR_10) {
   VAR_10--;
   *VAR_10 = '\0';
   FUNC_2(&VAR_2->pci_dev->dev, "%s\n", VAR_8);
  }
 }

 FUNC_3(VAR_9);
 FUNC_7(VAR_2, "setenv stdout serial\n", 50);
}
