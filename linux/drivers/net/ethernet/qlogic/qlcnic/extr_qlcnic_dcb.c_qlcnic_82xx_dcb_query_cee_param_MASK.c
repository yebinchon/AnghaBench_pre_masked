
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qlcnic_dcb_param {void** app; void** pg_tsa_map; void** pg_bw_map; void** prio_pg_map; void** hdr_prio_pfc_map; } ;
struct qlcnic_dcb {struct qlcnic_adapter* adapter; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct qlcnic_82xx_dcb_param_mbx_le {int * app; int * pg_tsa_map; int * pg_bw_map; int * prio_pg_map; int * hdr_prio_pfc_map; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (struct device*,int,void*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (char*,struct qlcnic_dcb_param*,int) ;
 int FUNC_7 (struct qlcnic_dcb_param*,int ,int) ;
 int FUNC_8 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_9 (struct qlcnic_cmd_args*) ;
 int FUNC_10 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_11(struct qlcnic_dcb *VAR_5,
        char *VAR_6, u8 VAR_7)
{
 u16 VAR_8 = sizeof(struct qlcnic_82xx_dcb_param_mbx_le);
 struct qlcnic_adapter *VAR_9 = VAR_5->adapter;
 struct qlcnic_82xx_dcb_param_mbx_le *VAR_10;
 struct device *VAR_11 = &VAR_9->pdev->dev;
 dma_addr_t VAR_12;
 struct qlcnic_dcb_param VAR_13;
 struct qlcnic_cmd_args VAR_14;
 u64 VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;

 switch (VAR_7) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_2(VAR_11, "Invalid parameter type %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_16 = FUNC_3(VAR_11, VAR_8, &VAR_12, VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;

 VAR_10 = VAR_16;

 VAR_17 = FUNC_8(&VAR_14, VAR_9, VAR_3);
 if (VAR_17)
  goto out_free_rsp;

 VAR_15 = VAR_12;
 VAR_14.req.arg[1] = VAR_8 | (VAR_7 << 16);
 VAR_14.req.arg[2] = FUNC_1(VAR_15);
 VAR_14.req.arg[3] = FUNC_0(VAR_15);

 VAR_17 = FUNC_10(VAR_9, &VAR_14);
 if (VAR_17) {
  FUNC_2(VAR_11, "Failed to query DCBX parameter, err %d\n", VAR_17);
  goto out;
 }

 FUNC_7(&VAR_13, 0, sizeof(struct qlcnic_dcb_param));
 VAR_13.hdr_prio_pfc_map[0] = FUNC_5(VAR_10->hdr_prio_pfc_map[0]);
 VAR_13.hdr_prio_pfc_map[1] = FUNC_5(VAR_10->hdr_prio_pfc_map[1]);
 VAR_13.prio_pg_map[0] = FUNC_5(VAR_10->prio_pg_map[0]);
 VAR_13.prio_pg_map[1] = FUNC_5(VAR_10->prio_pg_map[1]);
 VAR_13.pg_bw_map[0] = FUNC_5(VAR_10->pg_bw_map[0]);
 VAR_13.pg_bw_map[1] = FUNC_5(VAR_10->pg_bw_map[1]);
 VAR_13.pg_tsa_map[0] = FUNC_5(VAR_10->pg_tsa_map[0]);
 VAR_13.pg_tsa_map[1] = FUNC_5(VAR_10->pg_tsa_map[1]);

 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
  VAR_13.app[VAR_18] = FUNC_5(VAR_10->app[VAR_18]);

 if (VAR_6)
  FUNC_6(VAR_6, &VAR_13, VAR_8);
out:
 FUNC_9(&VAR_14);

out_free_rsp:
 FUNC_4(VAR_11, VAR_8, VAR_16, VAR_12);

 return VAR_17;
}
