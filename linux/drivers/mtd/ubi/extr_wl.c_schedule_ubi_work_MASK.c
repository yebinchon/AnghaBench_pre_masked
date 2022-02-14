
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int dummy; } ;
struct ubi_device {int work_sem; } ;


 int FUNC_0 (struct ubi_device*,struct ubi_work*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ubi_device *VAR_0, struct ubi_work *VAR_1)
{
 FUNC_1(&VAR_0->work_sem);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->work_sem);
}
