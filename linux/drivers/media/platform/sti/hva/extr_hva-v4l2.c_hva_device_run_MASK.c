
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {int work_queue; } ;
struct hva_ctx {int run_work; } ;


 struct hva_dev* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct hva_ctx *VAR_1 = VAR_0;
 struct hva_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->work_queue, &VAR_1->run_work);
}
