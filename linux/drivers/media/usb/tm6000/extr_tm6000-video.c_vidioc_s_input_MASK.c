
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {unsigned int input; int norm; TYPE_1__* vinput; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct tm6000_fh *VAR_4 = VAR_2;
 struct tm6000_core *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;

 if (VAR_3 >= 3)
  return -VAR_0;
 if (!VAR_5->vinput[VAR_3].type)
  return -VAR_0;

 VAR_5->input = VAR_3;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5->norm);

 return VAR_6;
}
