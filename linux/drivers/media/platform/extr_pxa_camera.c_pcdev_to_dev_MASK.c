
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct pxa_camera_dev {TYPE_1__ v4l2_dev; } ;
struct device {int dummy; } ;



__attribute__((used)) static struct device *FUNC_0(struct pxa_camera_dev *VAR_0)
{
 return VAR_0->v4l2_dev.dev;
}
