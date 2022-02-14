
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct em28xx {TYPE_1__* v4l2; } ;
struct TYPE_2__ {int norm; } ;


 struct em28xx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct em28xx *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->v4l2->norm;

 return 0;
}
