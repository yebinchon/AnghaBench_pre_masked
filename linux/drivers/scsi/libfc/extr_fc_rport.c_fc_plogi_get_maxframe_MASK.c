
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sp_bb_data; } ;
struct fc_els_flogi {TYPE_2__* fl_cssp; TYPE_1__ fl_csp; } ;
struct TYPE_4__ {int cp_rdfs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct fc_els_flogi *VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4;





 VAR_4 = FUNC_0(VAR_2->fl_csp.sp_bb_data) & VAR_0;
 if (VAR_4 >= VAR_1 && VAR_4 < VAR_3)
  VAR_3 = VAR_4;
 VAR_4 = FUNC_0(VAR_2->fl_cssp[3 - 1].cp_rdfs);
 if (VAR_4 >= VAR_1 && VAR_4 < VAR_3)
  VAR_3 = VAR_4;
 return VAR_3;
}
