
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int dummy; } ;


 int FUNC_0 (struct nvme_ctrl*,unsigned int) ;
 int FUNC_1 (struct nvme_ctrl*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct nvme_ctrl *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
  FUNC_1(VAR_0, VAR_2);

 FUNC_0(VAR_0, VAR_1);
}
