
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2255_mode {int bright; int color; int fdec; int scale; int format; } ;
struct s2255_dev {TYPE_1__* udev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct s2255_dev *VAR_0, struct s2255_mode *VAR_1)
{
 struct device *VAR_2 = &VAR_0->udev->dev;
 FUNC_0(VAR_2, "------------------------------------------------\n");
 FUNC_0(VAR_2, "format: %d\nscale %d\n", VAR_1->format, VAR_1->scale);
 FUNC_0(VAR_2, "fdec: %d\ncolor %d\n", VAR_1->fdec, VAR_1->color);
 FUNC_0(VAR_2, "bright: 0x%x\n", VAR_1->bright);
 FUNC_0(VAR_2, "------------------------------------------------\n");
}
