
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_enable_bbcr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct lpfc_hba *VAR_5, uint VAR_6)
{
 if (FUNC_1(VAR_6, 0, 1) && VAR_5->sli_rev == VAR_4) {
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "3068 %s_enable_bbcr changed from %d to %d\n",
    VAR_3, VAR_5->cfg_enable_bbcr, VAR_6);
  VAR_5->cfg_enable_bbcr = VAR_6;
  return 0;
 }
 FUNC_0(VAR_5, VAR_1, VAR_2,
   "0451 %s_enable_bbcr cannot set to %d, range is 0, 1\n",
   VAR_3, VAR_6);
 return -VAR_0;
}
