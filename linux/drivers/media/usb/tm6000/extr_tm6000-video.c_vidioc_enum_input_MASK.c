
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int std; int name; int type; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {TYPE_1__* vinput; } ;
struct file {int dummy; } ;
struct TYPE_2__ {size_t type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
    struct v4l2_input *VAR_8)
{
 struct tm6000_fh *VAR_9 = VAR_7;
 struct tm6000_core *VAR_10 = VAR_9->dev;
 unsigned int VAR_11;

 VAR_11 = VAR_8->index;
 if (VAR_11 >= 3)
  return -VAR_0;

 if (!VAR_10->vinput[VAR_11].type)
  return -VAR_0;

 VAR_8->index = VAR_11;

 if (VAR_10->vinput[VAR_11].type == VAR_1)
  VAR_8->type = VAR_4;
 else
  VAR_8->type = VAR_3;

 FUNC_0(VAR_8->name, VAR_5[VAR_10->vinput[VAR_11].type], sizeof(VAR_8->name));

 VAR_8->std = VAR_2;

 return 0;
}
