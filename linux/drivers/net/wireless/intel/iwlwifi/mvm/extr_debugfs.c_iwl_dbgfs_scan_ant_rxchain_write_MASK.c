
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {int scan_rx_ant; TYPE_1__* fw; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (char*,char*,int*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct iwl_mvm *VAR_4, char *VAR_5,
     size_t VAR_6, loff_t *VAR_7)
{
 u8 VAR_8;

 if (!FUNC_2(VAR_4))
  return -VAR_2;

 if (FUNC_4(VAR_5, "%hhx", &VAR_8) != 1)
  return -VAR_1;
 if (VAR_8 > VAR_0)
  return -VAR_1;
 if (VAR_8 & ~(FUNC_3(VAR_4)))
  return -VAR_1;

 if (VAR_4->scan_rx_ant != VAR_8) {
  VAR_4->scan_rx_ant = VAR_8;
  if (FUNC_0(&VAR_4->fw->ucode_capa,
    VAR_3))
   FUNC_1(VAR_4);
 }

 return VAR_6;
}
