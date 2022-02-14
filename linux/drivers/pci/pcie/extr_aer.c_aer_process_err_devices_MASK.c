
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aer_err_info {int error_dev_num; scalar_t__* dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct aer_err_info*) ;
 int FUNC_1 (scalar_t__,struct aer_err_info*) ;
 int FUNC_2 (scalar_t__,struct aer_err_info*) ;

__attribute__((used)) static inline void FUNC_3(struct aer_err_info *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->error_dev_num && VAR_0->dev[VAR_1]; VAR_1++) {
  if (FUNC_0(VAR_0->dev[VAR_1], VAR_0))
   FUNC_1(VAR_0->dev[VAR_1], VAR_0);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->error_dev_num && VAR_0->dev[VAR_1]; VAR_1++) {
  if (FUNC_0(VAR_0->dev[VAR_1], VAR_0))
   FUNC_2(VAR_0->dev[VAR_1], VAR_0);
 }
}
