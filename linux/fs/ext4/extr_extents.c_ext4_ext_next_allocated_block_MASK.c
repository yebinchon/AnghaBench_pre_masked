
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_ext_path {int p_depth; TYPE_1__* p_idx; int p_hdr; TYPE_2__* p_ext; } ;
typedef int ext4_lblk_t ;
struct TYPE_4__ {int ee_block; } ;
struct TYPE_3__ {int ei_block; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

ext4_lblk_t
FUNC_4(struct ext4_ext_path *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1 == ((void*)0));
 VAR_2 = VAR_1->p_depth;

 if (VAR_2 == 0 && VAR_1->p_ext == ((void*)0))
  return VAR_0;

 while (VAR_2 >= 0) {
  if (VAR_2 == VAR_1->p_depth) {

   if (VAR_1[VAR_2].p_ext &&
    VAR_1[VAR_2].p_ext !=
     FUNC_1(VAR_1[VAR_2].p_hdr))
     return FUNC_3(VAR_1[VAR_2].p_ext[1].ee_block);
  } else {

   if (VAR_1[VAR_2].p_idx !=
     FUNC_2(VAR_1[VAR_2].p_hdr))
     return FUNC_3(VAR_1[VAR_2].p_idx[1].ei_block);
  }
  VAR_2--;
 }

 return VAR_0;
}
