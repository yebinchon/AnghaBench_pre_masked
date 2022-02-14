
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum dss_feat_id { ____Placeholder_dss_feat_id } dss_feat_id ;
struct TYPE_2__ {int* features; int num_features; } ;


 TYPE_1__* VAR_0 ;

bool FUNC_0(enum dss_feat_id VAR_1)
{
 int VAR_2;
 const enum dss_feat_id *VAR_3 = VAR_0->features;
 const int VAR_4 = VAR_0->num_features;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_3[VAR_2] == VAR_1)
   return 1;
 }

 return 0;
}
