
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct asd_ocm_dir_ent {scalar_t__ type; int size; int offs; } ;
struct asd_ocm_dir {int num_de; struct asd_ocm_dir_ent* entry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct asd_ocm_dir *VAR_1, u8 VAR_2,
         u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5;
 struct asd_ocm_dir_ent *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_de; VAR_5++) {
  if (VAR_1->entry[VAR_5].type == VAR_2)
   break;
 }
 if (VAR_5 >= VAR_1->num_de)
  return -VAR_0;
 VAR_6 = &VAR_1->entry[VAR_5];
 *VAR_3 = (u32) FUNC_0(VAR_6->offs);
 *VAR_4 = (u32) FUNC_0(VAR_6->size);
 return 0;
}
