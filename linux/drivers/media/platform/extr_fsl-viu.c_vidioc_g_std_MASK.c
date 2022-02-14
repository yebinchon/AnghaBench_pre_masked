
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct viu_fh {TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int std; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1;

 *VAR_2 = VAR_3->dev->std;
 return 0;
}
