
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; } ;
struct TYPE_5__ {TYPE_1__ rc; } ;
union ibmvnic_crq {TYPE_2__ generic; } ;
struct net_device {scalar_t__ mtu; } ;
struct ibmvnic_login_rsp_buffer {scalar_t__ num_txsubm_subcrqs; int num_rxadd_subcrqs; } ;
struct ibmvnic_login_buffer {scalar_t__ num_txcomp_subcrqs; int num_rxcomp_subcrqs; } ;
struct ibmvnic_adapter {int login_buf_sz; int login_rsp_buf_sz; int req_rx_add_queues; int init_done; TYPE_3__* vdev; struct ibmvnic_login_rsp_buffer* login_rsp_buf; struct net_device* netdev; scalar_t__ req_mtu; scalar_t__ init_done_rc; int login_rsp_buf_token; int login_buf_token; struct ibmvnic_login_buffer* login_buf; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 int FUNC_6 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_7(union ibmvnic_crq *VAR_4,
       struct ibmvnic_adapter *VAR_5)
{
 struct device *VAR_6 = &VAR_5->vdev->dev;
 struct net_device *VAR_7 = VAR_5->netdev;
 struct ibmvnic_login_rsp_buffer *VAR_8 = VAR_5->login_rsp_buf;
 struct ibmvnic_login_buffer *VAR_9 = VAR_5->login_buf;
 int VAR_10;

 FUNC_3(VAR_6, VAR_5->login_buf_token, VAR_5->login_buf_sz,
    VAR_1);
 FUNC_3(VAR_6, VAR_5->login_rsp_buf_token,
    VAR_5->login_rsp_buf_sz, VAR_0);





 if (VAR_4->generic.rc.code) {
  VAR_5->init_done_rc = VAR_4->generic.rc.code;
  FUNC_1(&VAR_5->init_done);
  return 0;
 }

 VAR_7->mtu = VAR_5->req_mtu - VAR_3;

 FUNC_5(VAR_5->netdev, "Login Response Buffer:\n");
 for (VAR_10 = 0; VAR_10 < (VAR_5->login_rsp_buf_sz - 1) / 8 + 1; VAR_10++) {
  FUNC_5(VAR_5->netdev, "%016lx\n",
      ((unsigned long int *)(VAR_5->login_rsp_buf))[VAR_10]);
 }


 if (VAR_9->num_txcomp_subcrqs != VAR_8->num_txsubm_subcrqs ||
     (FUNC_0(VAR_9->num_rxcomp_subcrqs) *
      VAR_5->req_rx_add_queues !=
      FUNC_0(VAR_8->num_rxadd_subcrqs))) {
  FUNC_2(VAR_6, "FATAL: Inconsistent login and login rsp\n");
  FUNC_4(VAR_5->vdev);
  return -VAR_2;
 }
 FUNC_6(VAR_5);
 FUNC_1(&VAR_5->init_done);

 return 0;
}
