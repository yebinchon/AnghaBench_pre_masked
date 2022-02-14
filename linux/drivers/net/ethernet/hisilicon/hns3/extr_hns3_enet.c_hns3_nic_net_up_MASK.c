
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int vector_num; int * tqp_vector; int state; struct hnae3_handle* ae_handle; } ;
struct TYPE_6__ {int num_tqps; int * tqp; } ;
struct hnae3_handle {TYPE_3__ kinfo; TYPE_2__* ae_algo; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* start ) (struct hnae3_handle*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hns3_nic_priv*) ;
 int FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hns3_nic_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,char*,int) ;
 struct hns3_nic_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,char*,int) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_1)
{
 struct hns3_nic_priv *VAR_2 = FUNC_11(VAR_1);
 struct hnae3_handle *VAR_3 = VAR_2->ae_handle;
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_5(VAR_1);
 if (VAR_6)
  FUNC_12(VAR_1, "set rx cpu rmap fail, ret=%d!\n", VAR_6);


 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6) {
  FUNC_10(VAR_1, "init irq failed! ret=%d\n", VAR_6);
  goto free_rmap;
 }

 FUNC_0(VAR_0, &VAR_2->state);


 for (VAR_4 = 0; VAR_4 < VAR_2->vector_num; VAR_4++)
  FUNC_9(&VAR_2->tqp_vector[VAR_4]);


 for (VAR_5 = 0; VAR_5 < VAR_3->kinfo.num_tqps; VAR_5++)
  FUNC_7(VAR_3->kinfo.tqp[VAR_5]);


 VAR_6 = VAR_3->ae_algo->ops->start ? VAR_3->ae_algo->ops->start(VAR_3) : 0;
 if (VAR_6)
  goto out_start_err;

 return 0;

out_start_err:
 FUNC_13(VAR_0, &VAR_2->state);
 while (VAR_5--)
  FUNC_6(VAR_3->kinfo.tqp[VAR_5]);

 for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_8(&VAR_2->tqp_vector[VAR_5]);

 FUNC_4(VAR_2);
free_rmap:
 FUNC_1(VAR_1);
 return VAR_6;
}
