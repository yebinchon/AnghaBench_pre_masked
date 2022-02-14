
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int netdev; TYPE_2__* ahw; } ;
typedef int cmd ;
struct TYPE_4__ {int vxlan_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_cmd_args*,int ,int) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_3,
        bool VAR_4)
{
 u16 VAR_5 = VAR_3->ahw->vxlan_port;
 struct qlcnic_cmd_args VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

 VAR_7 = FUNC_3(&VAR_6, VAR_3,
        VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_6.req.arg[1] = VAR_4 ? VAR_2 :
     VAR_1;

 VAR_7 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_7)
  FUNC_1(VAR_3->netdev,
      "Failed to %s VXLAN parsing for port %d\n",
      VAR_4 ? "enable" : "disable", VAR_5);
 else
  FUNC_2(VAR_3->netdev,
       "%s VXLAN parsing for port %d\n",
       VAR_4 ? "Enabled" : "Disabled", VAR_5);

 FUNC_4(&VAR_6);

 return VAR_7;
}
