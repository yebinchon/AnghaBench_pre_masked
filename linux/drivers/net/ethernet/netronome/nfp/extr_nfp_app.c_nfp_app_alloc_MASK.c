
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_pf {int pdev; int cpp; } ;
struct nfp_app {TYPE_1__* type; int pdev; int cpp; struct nfp_pf* pf; } ;
typedef enum nfp_app_id { ____Placeholder_nfp_app_id } nfp_app_id ;
struct TYPE_3__ {scalar_t__ ctrl_msg_rx_raw; int ctrl_msg_rx; int vnic_alloc; int name; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfp_app* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__** VAR_3 ;
 struct nfp_app* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;

struct nfp_app *FUNC_5(struct nfp_pf *VAR_4, enum nfp_app_id VAR_5)
{
 struct nfp_app *VAR_6;

 if (VAR_5 >= FUNC_0(VAR_3) || !VAR_3[VAR_5]) {
  FUNC_4(VAR_4->cpp, "unknown FW app ID 0x%02hhx, driver too old or support for FW not built in\n", VAR_5);
  return FUNC_1(-VAR_0);
 }

 if (FUNC_2(!VAR_3[VAR_5]->name || !VAR_3[VAR_5]->vnic_alloc))
  return FUNC_1(-VAR_0);
 if (FUNC_2(!VAR_3[VAR_5]->ctrl_msg_rx && VAR_3[VAR_5]->ctrl_msg_rx_raw))
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_1(-VAR_1);

 VAR_6->pf = VAR_4;
 VAR_6->cpp = VAR_4->cpp;
 VAR_6->pdev = VAR_4->pdev;
 VAR_6->type = VAR_3[VAR_5];

 return VAR_6;
}
