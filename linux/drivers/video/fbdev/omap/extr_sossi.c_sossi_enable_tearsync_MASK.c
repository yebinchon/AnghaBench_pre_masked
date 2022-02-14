
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int tearsync_line; int tearsync_mode; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, unsigned VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1.fbdev->dev, "tearsync %d line %d\n", VAR_2, VAR_3);
 if (VAR_3 >= 1 << 11)
  return -VAR_0;
 if (VAR_2) {
  if (VAR_3)
   VAR_4 = 2;
  else
   VAR_4 = 3;
 } else
  VAR_4 = 0;
 VAR_1.tearsync_line = VAR_3;
 VAR_1.tearsync_mode = VAR_4;

 return 0;
}
