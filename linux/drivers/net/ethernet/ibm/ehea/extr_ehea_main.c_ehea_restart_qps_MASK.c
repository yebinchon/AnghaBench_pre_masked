
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hcp_modify_qp_cb0 {int qp_ctl_reg; } ;
struct ehea_qp {int fw_handle; } ;
struct TYPE_2__ {int index; } ;
struct ehea_port_res {TYPE_1__ rq1_skba; struct ehea_qp* qp; } ;
struct ehea_port {int num_def_qps; struct ehea_port_res* port_res; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ehea_port_res*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_modify_qp_cb0*,scalar_t__*,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,struct hcp_modify_qp_cb0*) ;
 int FUNC_4 (struct ehea_port_res*,int ,int ) ;
 int FUNC_5 (struct ehea_port_res*,int ) ;
 int FUNC_6 (struct ehea_port_res*,int ) ;
 int FUNC_7 (struct ehea_qp*,struct ehea_port_res*) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct ehea_port* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_7)
{
 struct ehea_port *VAR_8 = FUNC_11(VAR_7);
 struct ehea_adapter *VAR_9 = VAR_8->adapter;
 int VAR_10 = 0;
 int VAR_11;

 struct hcp_modify_qp_cb0 *VAR_12;
 u64 VAR_13;
 u64 VAR_14 = 0;
 u16 VAR_15 = 0;

 VAR_12 = (void *)FUNC_9(VAR_1);
 if (!VAR_12) {
  VAR_10 = -VAR_0;
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < (VAR_8->num_def_qps); VAR_11++) {
  struct ehea_port_res *VAR_16 = &VAR_8->port_res[VAR_11];
  struct ehea_qp *VAR_17 = VAR_16->qp;

  VAR_10 = FUNC_1(VAR_16);
  if (VAR_10) {
   FUNC_10(VAR_7, "creation of shared memory regions failed\n");
   goto out;
  }

  FUNC_7(VAR_17, VAR_16);


  VAR_13 = FUNC_3(VAR_9->handle, 0, VAR_17->fw_handle,
         FUNC_0(VAR_2, 0xFFFF),
         VAR_12);
  if (VAR_13 != VAR_6) {
   FUNC_10(VAR_7, "query_ehea_qp failed (1)\n");
   goto out;
  }

  VAR_12->qp_ctl_reg = (VAR_12->qp_ctl_reg & VAR_5) << 8;
  VAR_12->qp_ctl_reg |= VAR_4;

  VAR_13 = FUNC_2(VAR_9->handle, 0, VAR_17->fw_handle,
          FUNC_0(VAR_3,
           1), VAR_12, &VAR_14,
          &VAR_14, &VAR_15, &VAR_15);
  if (VAR_13 != VAR_6) {
   FUNC_10(VAR_7, "modify_ehea_qp failed (1)\n");
   goto out;
  }

  VAR_13 = FUNC_3(VAR_9->handle, 0, VAR_17->fw_handle,
         FUNC_0(VAR_2, 0xFFFF),
         VAR_12);
  if (VAR_13 != VAR_6) {
   FUNC_10(VAR_7, "query_ehea_qp failed (2)\n");
   goto out;
  }


  FUNC_4(VAR_16, VAR_16->rq1_skba.index, 0);
  FUNC_5(VAR_16, 0);
  FUNC_6(VAR_16, 0);
 }
out:
 FUNC_8((unsigned long)VAR_12);

 return VAR_10;
}
