
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ba_lun_info {int free_aun_cnt; } ;
struct ba_lun {struct ba_lun_info* ba_lun_handle; } ;



__attribute__((used)) static u64 FUNC_0(struct ba_lun *VAR_0)
{
 struct ba_lun_info *VAR_1 = VAR_0->ba_lun_handle;

 return VAR_1->free_aun_cnt;
}
