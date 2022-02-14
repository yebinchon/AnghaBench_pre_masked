
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {int index; int std; int type; int name; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char const* const,int) ;

int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_input *VAR_6)
{
 static const char * const VAR_7[] = {
  "tuner", "composite", "svideo", "aux",
  "composite 2", "svideo 2", "aux 2"
 };
 int VAR_8;

 if (VAR_6->index >= 7)
  return -VAR_0;

 FUNC_1(VAR_6->name, VAR_7[VAR_6->index], sizeof(VAR_6->name));

 if (VAR_6->index == 0)
  VAR_6->type = VAR_2;
 else
  VAR_6->type = VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
  VAR_6->std |= VAR_3[VAR_8].id;

 return 0;
}
