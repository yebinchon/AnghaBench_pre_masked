
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct llcc_slice_desc {int slice_size; int slice_id; } ;
struct llcc_slice_config {scalar_t__ usecase_id; int max_cap; int slice_id; } ;
struct TYPE_4__ {scalar_t__ cfg_size; struct llcc_slice_config* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct llcc_slice_desc* FUNC_0 (TYPE_1__*) ;
 struct llcc_slice_desc* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 struct llcc_slice_desc* FUNC_3 (int,int ) ;

struct llcc_slice_desc *FUNC_4(u32 VAR_4)
{
 const struct llcc_slice_config *VAR_5;
 struct llcc_slice_desc *VAR_6;
 u32 VAR_7, VAR_8;

 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 VAR_5 = VAR_3->cfg;
 VAR_7 = VAR_3->cfg_size;

 for (VAR_8 = 0; VAR_5 && VAR_8 < VAR_7; VAR_8++, VAR_5++)
  if (VAR_5->usecase_id == VAR_4)
   break;

 if (VAR_8 == VAR_7 || !VAR_5)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_1(-VAR_1);

 VAR_6->slice_id = VAR_5->slice_id;
 VAR_6->slice_size = VAR_5->max_cap;

 return VAR_6;
}
