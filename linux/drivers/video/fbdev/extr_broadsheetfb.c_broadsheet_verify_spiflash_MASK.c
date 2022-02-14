
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct broadsheetfb_par {TYPE_1__* info; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int*) ;
 int FUNC_2 (struct broadsheetfb_par*,int,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct broadsheetfb_par *VAR_1,
      int *VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_1, 0xAB, 0x00000000);
 if (VAR_3)
  goto failout;

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3)
  goto failout;

 if ((VAR_4 != 0x10) && (VAR_4 != 0x11)) {
  FUNC_3(VAR_1->info->device, "Unexpected flash type\n");
  VAR_3 = -VAR_0;
  goto failout;
 }

 *VAR_2 = VAR_4;

failout:
 FUNC_2(VAR_1, 0x0208, 0);
 return VAR_3;
}
