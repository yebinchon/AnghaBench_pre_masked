
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hcp_modify_qp_cb0 {int qp_ctl_reg; } ;
struct ehea_qp {int fw_handle; } ;
struct ehea_port_res {struct ehea_qp* qp; } ;
struct ehea_port {int num_def_qps; struct ehea_port_res* port_res; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_modify_qp_cb0*,scalar_t__*,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_modify_qp_cb0*) ;
 int FUNC_3 (struct ehea_qp*) ;
 int FUNC_4 (struct ehea_port_res*) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 struct ehea_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8)
{
 struct ehea_port *VAR_9 = FUNC_7(VAR_8);
 struct ehea_adapter *VAR_10 = VAR_9->adapter;
 struct hcp_modify_qp_cb0 *VAR_11;
 int VAR_12 = -VAR_0;
 int VAR_13;
 int VAR_14;
 u64 VAR_15;
 u64 VAR_16 = 0;
 u16 VAR_17 = 0;

 VAR_11 = (void *)FUNC_6(VAR_2);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto out;
 }

 for (VAR_14 = 0; VAR_14 < (VAR_9->num_def_qps); VAR_14++) {
  struct ehea_port_res *VAR_18 = &VAR_9->port_res[VAR_14];
  struct ehea_qp *VAR_19 = VAR_18->qp;


  FUNC_3(VAR_19);


  VAR_15 = FUNC_2(VAR_10->handle, 0, VAR_19->fw_handle,
         FUNC_0(VAR_3, 0xFFFF),
         VAR_11);
  if (VAR_15 != VAR_7) {
   FUNC_8("query_ehea_qp failed (1)\n");
   goto out;
  }

  VAR_11->qp_ctl_reg = (VAR_11->qp_ctl_reg & VAR_6) << 8;
  VAR_11->qp_ctl_reg &= ~VAR_5;

  VAR_15 = FUNC_1(VAR_10->handle, 0, VAR_19->fw_handle,
          FUNC_0(VAR_4,
           1), VAR_11, &VAR_16,
          &VAR_16, &VAR_17, &VAR_17);
  if (VAR_15 != VAR_7) {
   FUNC_8("modify_ehea_qp failed (1)\n");
   goto out;
  }

  VAR_15 = FUNC_2(VAR_10->handle, 0, VAR_19->fw_handle,
         FUNC_0(VAR_3, 0xFFFF),
         VAR_11);
  if (VAR_15 != VAR_7) {
   FUNC_8("query_ehea_qp failed (2)\n");
   goto out;
  }


  VAR_13 = FUNC_4(VAR_18);
  if (VAR_13) {
   FUNC_8("unreg shared memory region failed\n");
   goto out;
  }
 }

 VAR_12 = 0;
out:
 FUNC_5((unsigned long)VAR_11);

 return VAR_12;
}
