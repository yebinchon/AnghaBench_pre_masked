
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct goldfish_pipe_dev {scalar_t__ buffers; int pipes; int irq_tasklet; int miscdev; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0,
     struct goldfish_pipe_dev *VAR_1)
{
 FUNC_2(&VAR_1->miscdev);
 FUNC_3(&VAR_1->irq_tasklet);
 FUNC_1(VAR_1->pipes);
 FUNC_0((unsigned long)VAR_1->buffers);
}
