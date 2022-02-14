
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {unsigned int index; int audioset; int std; int capabilities; int name; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_10, void *VAR_11, struct v4l2_input *VAR_12)
{
 unsigned int VAR_13;

 VAR_13 = VAR_12->index;
 if (VAR_13 >= VAR_4)
  return -VAR_0;

 VAR_12->type = VAR_5;

 FUNC_0(VAR_12->name, VAR_9[VAR_13], sizeof(VAR_12->name));

 VAR_12->audioset = 1<<VAR_2 | 1<<VAR_1 | 1<<VAR_3;

 VAR_12->capabilities = VAR_13 ? VAR_7 : VAR_6;
 VAR_12->std = VAR_13 ? VAR_8 : 0;

 return 0;
}
