
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct viu_fh {int dev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct viu_fh *VAR_5 = VAR_3;

 FUNC_0(VAR_5->dev, VAR_1, VAR_0, VAR_4);
 return 0;
}
