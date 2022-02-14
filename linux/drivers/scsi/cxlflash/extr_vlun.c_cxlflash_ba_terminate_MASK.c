
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ba_lun_info {struct ba_lun_info* lun_alloc_map; struct ba_lun_info* aun_clone_map; } ;
struct ba_lun {struct ba_lun_info* ba_lun_handle; } ;


 int FUNC_0 (struct ba_lun_info*) ;

void FUNC_1(struct ba_lun *VAR_0)
{
 struct ba_lun_info *VAR_1 = VAR_0->ba_lun_handle;

 if (VAR_1) {
  FUNC_0(VAR_1->aun_clone_map);
  FUNC_0(VAR_1->lun_alloc_map);
  FUNC_0(VAR_1);
  VAR_0->ba_lun_handle = ((void*)0);
 }
}
