
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct broadsheetfb_par {TYPE_1__* info; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int*) ;
 int FUNC_1 (struct broadsheetfb_par*,int) ;
 int FUNC_2 (struct broadsheetfb_par*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct broadsheetfb_par *VAR_1,
        int VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 do {
  FUNC_2(VAR_1, 0x0208, 1);

  VAR_4 = FUNC_1(VAR_1, 0x05);
  if (VAR_4)
   goto failout;

  VAR_4 = FUNC_0(VAR_1, &VAR_3);
  if (VAR_4)
   goto failout;

  FUNC_2(VAR_1, 0x0208, 0);

  if (!(VAR_3 & 0x1))
   return 0;

  FUNC_4(5);
 } while (VAR_2--);

 FUNC_3(VAR_1->info->device, "Timed out waiting for spiflash status\n");
 return -VAR_0;

failout:
 FUNC_2(VAR_1, 0x0208, 0);
 return VAR_4;
}
