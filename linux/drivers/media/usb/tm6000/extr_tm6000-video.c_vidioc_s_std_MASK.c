
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tm6000_fh {int height; int width; struct tm6000_core* dev; } ;
struct tm6000_core {int norm; int v4l2_dev; int height; int width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm6000_core*) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 int VAR_5 = 0;
 struct tm6000_fh *VAR_6 = VAR_3;
 struct tm6000_core *VAR_7 = VAR_6->dev;

 VAR_7->norm = VAR_4;
 VAR_5 = FUNC_0(VAR_7);

 VAR_6->width = VAR_7->width;
 VAR_6->height = VAR_7->height;

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(&VAR_7->v4l2_dev, 0, VAR_1, VAR_0, VAR_7->norm);

 return 0;
}
