
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct cx88_core {int tvnorm; } ;
struct cx8802_dev {struct cx88_core* core; } ;


 struct cx8802_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct cx8802_dev *VAR_3 = FUNC_0(VAR_0);
 struct cx88_core *VAR_4 = VAR_3->core;

 *VAR_2 = VAR_4->tvnorm;
 return 0;
}
