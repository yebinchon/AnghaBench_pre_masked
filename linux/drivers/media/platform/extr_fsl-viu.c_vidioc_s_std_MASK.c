
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct viu_fh {TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int std; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct viu_fh *VAR_5 = VAR_3;

 VAR_5->dev->std = VAR_4;
 FUNC_0(VAR_5->dev, VAR_1, VAR_0, VAR_4);
 return 0;
}
