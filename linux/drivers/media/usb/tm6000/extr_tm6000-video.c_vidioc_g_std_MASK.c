
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {int norm; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct tm6000_fh *VAR_3 = VAR_1;
 struct tm6000_core *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->norm;
 return 0;
}
