
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct status_desc {int * status_desc_data; } ;
struct qlcnic_host_sds_ring {struct qlcnic_adapter* adapter; int num_desc; struct status_desc* desc_head; } ;
struct qlcnic_fw_msg {int * body; void** words; } ;
struct qlcnic_adapter {int dcb; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int diag_cnt; int loopback_state; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_fw_msg*) ;

__attribute__((used)) static void FUNC_6(int VAR_4, int VAR_5,
         struct qlcnic_host_sds_ring *VAR_6)
{
 struct qlcnic_fw_msg VAR_7;
 struct status_desc *VAR_8;
 struct qlcnic_adapter *VAR_9;
 struct device *VAR_10;
 int VAR_11 = 0, VAR_12, VAR_13;

 while (VAR_4 > 0 && VAR_11 < 8) {
  VAR_8 = &VAR_6->desc_head[VAR_5];
  VAR_7.words[VAR_11++] = FUNC_2(VAR_8->status_desc_data[0]);
  VAR_7.words[VAR_11++] = FUNC_2(VAR_8->status_desc_data[1]);

  VAR_5 = FUNC_1(VAR_5, VAR_6->num_desc);
  VAR_4--;
 }

 VAR_9 = VAR_6->adapter;
 VAR_10 = &VAR_9->pdev->dev;
 VAR_12 = FUNC_4(VAR_7.body[0]);

 switch (VAR_12) {
 case 128:
  FUNC_5(VAR_9, &VAR_7);
  break;
 case 130:
  VAR_13 = (u32)(VAR_7.body[1]);
  switch (VAR_13) {
  case 0:
   VAR_9->ahw->loopback_state |= VAR_3;
   break;
  case 1:
   FUNC_0(VAR_10, "loopback already in progress\n");
   VAR_9->ahw->diag_cnt = -VAR_0;
   break;
  case 2:
   FUNC_0(VAR_10, "loopback cable is not connected\n");
   VAR_9->ahw->diag_cnt = -VAR_2;
   break;
  default:
   FUNC_0(VAR_10,
     "loopback configure request failed, err %x\n",
     VAR_13);
   VAR_9->ahw->diag_cnt = -VAR_1;
   break;
  }
  break;
 case 129:
  FUNC_3(VAR_9->dcb, (void *)&VAR_7);
  break;
 default:
  break;
 }
}
