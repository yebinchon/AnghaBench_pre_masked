
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int scan_status; scalar_t__ max_scans; TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,int const,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_5, int VAR_6)
{
 bool VAR_7 = FUNC_1(&VAR_5->fw->ucode_capa,
      VAR_4);
 if ((VAR_6 == 128 || VAR_6 == 130) &&
     VAR_5->scan_status & (128 | 130))
  return -VAR_0;

 if (FUNC_2(VAR_5) < VAR_5->max_scans)
  return 0;




 switch (VAR_6) {
 case 129:
  if (VAR_5->scan_status & VAR_2)
   return -VAR_0;
  return FUNC_3(VAR_5, 128, 1);
 case 128:
  if (VAR_5->scan_status & VAR_3)
   return -VAR_0;
  return FUNC_3(VAR_5, 129, 1);
 case 130:





  if (!VAR_7)
   return 0;







  if (VAR_5->scan_status & VAR_2)
   return FUNC_3(VAR_5, 129,
       1);
  if (VAR_5->scan_status & VAR_3)
   return FUNC_3(VAR_5, 128,
       1);




 default:
  FUNC_0(1);
  break;
 }

 return -VAR_1;
}
