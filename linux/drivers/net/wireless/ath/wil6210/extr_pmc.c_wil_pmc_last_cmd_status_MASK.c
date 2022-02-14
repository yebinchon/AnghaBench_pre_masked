
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_cmd_status; } ;
struct wil6210_priv {TYPE_1__ pmc; } ;


 int FUNC_0 (struct wil6210_priv*,char*,int) ;

int FUNC_1(struct wil6210_priv *VAR_0)
{
 FUNC_0(VAR_0, "pmc_last_cmd_status: status %d\n",
       VAR_0->pmc.last_cmd_status);

 return VAR_0->pmc.last_cmd_status;
}
