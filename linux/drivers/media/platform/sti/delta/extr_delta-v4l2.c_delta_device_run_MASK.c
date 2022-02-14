
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_dev {int work_queue; } ;
struct delta_ctx {int run_work; struct delta_dev* dev; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct delta_ctx *VAR_1 = VAR_0;
 struct delta_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2->work_queue, &VAR_1->run_work);
}
