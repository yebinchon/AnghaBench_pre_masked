
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meye_params {int subsample; int quality; int sharpness; int agc; int picture; int framerate; } ;
struct TYPE_2__ {int lock; struct meye_params params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct meye_params *VAR_5)
{
 if (VAR_5->subsample > 1)
  return -VAR_0;

 if (VAR_5->quality > 10)
  return -VAR_0;

 if (VAR_5->sharpness > 63 || VAR_5->agc > 63 || VAR_5->picture > 63)
  return -VAR_0;

 if (VAR_5->framerate > 31)
  return -VAR_0;

 FUNC_1(&VAR_4.lock);

 if (VAR_4.params.subsample != VAR_5->subsample ||
     VAR_4.params.quality != VAR_5->quality)
  FUNC_0();

 VAR_4.params = *VAR_5;
 FUNC_3(VAR_3,
         VAR_4.params.sharpness);
 FUNC_3(VAR_1,
         VAR_4.params.agc);
 FUNC_3(VAR_2,
         VAR_4.params.picture);
 FUNC_2(&VAR_4.lock);

 return 0;
}
