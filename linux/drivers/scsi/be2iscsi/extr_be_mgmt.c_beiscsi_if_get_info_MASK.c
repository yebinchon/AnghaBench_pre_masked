
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct beiscsi_hba {TYPE_2__ ctrl; int interface_handle; } ;
struct be_dma_mem {int dma; struct be_cmd_get_if_info_req* va; int size; } ;
struct be_cmd_resp_hdr {int actual_resp_len; } ;
struct be_cmd_req_hdr {int dummy; } ;
struct be_cmd_get_if_info_resp {int dummy; } ;
struct be_cmd_get_if_info_req {int ip_type; int interface_hndl; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,struct be_cmd_get_if_info_resp*,int) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_3 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_4 (int *,int ,struct be_cmd_get_if_info_req*,int ) ;
 int FUNC_5 (struct be_cmd_get_if_info_resp*) ;
 struct be_cmd_get_if_info_resp* FUNC_6 (int,int ) ;

int FUNC_7(struct beiscsi_hba *VAR_8, int VAR_9,
   struct be_cmd_get_if_info_resp **VAR_10)
{
 struct be_cmd_get_if_info_req *VAR_11;
 struct be_dma_mem VAR_12;
 uint32_t VAR_13 = sizeof(struct be_cmd_get_if_info_resp);
 int VAR_14;

 VAR_14 = FUNC_1(VAR_8);
 if (VAR_14)
  return VAR_14;

 do {
  VAR_14 = FUNC_3(VAR_8, &VAR_12,
    VAR_2,
    VAR_7,
    VAR_13);
  if (VAR_14)
   return VAR_14;

  VAR_11 = VAR_12.va;
  VAR_11->interface_hndl = VAR_8->interface_handle;
  VAR_11->ip_type = VAR_9;


  *VAR_10 = FUNC_6(VAR_13, VAR_5);
  if (!*VAR_10) {
   FUNC_2(VAR_8, VAR_6,
        VAR_1 | VAR_0,
        "BG_%d : Memory Allocation Failure\n");


    FUNC_4(&VAR_8->ctrl.pdev->dev,
          VAR_12.size,
          VAR_12.va,
          VAR_12.dma);
    return -VAR_4;
  }

  VAR_14 = FUNC_0(VAR_8, &VAR_12, ((void*)0), *VAR_10,
         VAR_13);


  if (VAR_14 == -VAR_3) {


   VAR_13 = ((struct be_cmd_resp_hdr *)
          VAR_12.va)->actual_resp_len;
   VAR_13 += sizeof(struct be_cmd_req_hdr);


   FUNC_4(&VAR_8->ctrl.pdev->dev, VAR_12.size,
         VAR_12.va,
         VAR_12.dma);


   FUNC_5(*VAR_10);
  } else
   break;
 } while (1);
 return VAR_14;
}
