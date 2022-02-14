
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef enum dss_feat_reg_field { ____Placeholder_dss_feat_reg_field } dss_feat_reg_field ;
struct TYPE_4__ {int num_reg_fields; TYPE_1__* reg_fields; } ;
struct TYPE_3__ {int end; int start; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(enum dss_feat_reg_field VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 FUNC_0(VAR_1 >= VAR_0->num_reg_fields);

 *VAR_2 = VAR_0->reg_fields[VAR_1].start;
 *VAR_3 = VAR_0->reg_fields[VAR_1].end;
}
