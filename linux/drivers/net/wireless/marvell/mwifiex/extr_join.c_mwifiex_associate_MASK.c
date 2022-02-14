
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {scalar_t__ assoc_rsp_size; TYPE_1__* adapter; } ;
struct mwifiex_bssdescriptor {scalar_t__ bss_mode; int disable_11ac; int disable_11n; } ;
struct TYPE_2__ {int config_bands; int fw_cap_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_bssdescriptor*,int) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*) ;

int FUNC_5(struct mwifiex_private *VAR_5,
        struct mwifiex_bssdescriptor *VAR_6)
{



 if ((FUNC_0(VAR_5) != VAR_3) ||
     (VAR_6->bss_mode != VAR_4))
  return -1;

 if (FUNC_1(VAR_5->adapter->fw_cap_info) &&
     !VAR_6->disable_11n && !VAR_6->disable_11ac &&
     VAR_5->adapter->config_bands & VAR_0)
  FUNC_3(VAR_5);
 else
  FUNC_4(VAR_5);



 VAR_5->assoc_rsp_size = 0;

 return FUNC_2(VAR_5, VAR_2,
    VAR_1, 0, VAR_6, 1);
}
