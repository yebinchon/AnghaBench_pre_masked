
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {int index; } ;
struct file {int dummy; } ;
struct cx18 {int dummy; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int FUNC_0 (struct cx18*,int ,struct v4l2_input*) ;
 TYPE_1__* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_input *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_1(VAR_1)->cx;


 return FUNC_0(VAR_3, VAR_2->index, VAR_2);
}
