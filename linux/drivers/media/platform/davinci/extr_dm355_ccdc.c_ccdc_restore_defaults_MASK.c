
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* b_mg; void* gr_cy; void* gb_g; void* r_ye; } ;
struct TYPE_5__ {TYPE_1__ gain; } ;
struct TYPE_6__ {int dev; TYPE_2__ bayer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_16;

 FUNC_1(VAR_15.dev, "\nstarting ccdc_restore_defaults...");

 for (VAR_16 = 0; VAR_16 <= VAR_0; VAR_16 += 4)
  FUNC_2(0, VAR_16);


 FUNC_2(VAR_10, VAR_9);

 FUNC_2(VAR_2, VAR_1);
 FUNC_2(VAR_4, VAR_3);

 VAR_15.bayer.gain.r_ye = VAR_6;
 VAR_15.bayer.gain.gb_g = VAR_6;
 VAR_15.bayer.gain.gr_cy = VAR_6;
 VAR_15.bayer.gain.b_mg = VAR_6;
 FUNC_0();
 FUNC_2(VAR_12, VAR_11);
 FUNC_2(VAR_8, VAR_7);

 if (FUNC_4(VAR_13)) {
  FUNC_1(VAR_15.dev, "\ncouldn't select ccdc input source");
  return -VAR_5;
 }

 if (FUNC_3(VAR_14, 1) < 0) {
  FUNC_1(VAR_15.dev, "\ncouldn't enable ccdc clock");
  return -VAR_5;
 }
 FUNC_1(VAR_15.dev, "\nEnd of ccdc_restore_defaults...");
 return 0;
}
