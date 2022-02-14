
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx18 {unsigned int active_input; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 TYPE_1__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_0(VAR_1)->cx;

 *VAR_2 = VAR_3->active_input;
 return 0;
}
