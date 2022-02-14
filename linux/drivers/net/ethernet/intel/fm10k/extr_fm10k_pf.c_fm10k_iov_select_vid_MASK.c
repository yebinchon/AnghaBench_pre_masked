
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_vf_info {scalar_t__ pf_vid; scalar_t__ sw_vid; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;

s32 FUNC_0(struct fm10k_vf_info *VAR_1, u16 VAR_2)
{
 if (!VAR_2)
  return VAR_1->pf_vid ? VAR_1->pf_vid : VAR_1->sw_vid;
 else if (VAR_1->pf_vid && VAR_2 != VAR_1->pf_vid)
  return VAR_0;
 else
  return VAR_2;
}
