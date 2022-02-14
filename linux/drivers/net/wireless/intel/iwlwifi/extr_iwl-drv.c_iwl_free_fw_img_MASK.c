
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_drv {int dummy; } ;
struct fw_img {int num_sec; int * sec; } ;


 int FUNC_0 (struct iwl_drv*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_drv *VAR_0, struct fw_img *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_sec; VAR_2++)
  FUNC_0(VAR_0, &VAR_1->sec[VAR_2]);
 FUNC_1(VAR_1->sec);
}
