
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int hrrq_num; int hrrq_index; } ;


 unsigned int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct ipr_ioa_cfg *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->hrrq_num == 1)
  VAR_1 = 0;
 else {
  VAR_1 = FUNC_0(1, &VAR_0->hrrq_index);
  VAR_1 = (VAR_1 % (VAR_0->hrrq_num - 1)) + 1;
 }
 return VAR_1;
}
