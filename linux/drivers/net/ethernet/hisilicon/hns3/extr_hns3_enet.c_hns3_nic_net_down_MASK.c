
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int vector_num; TYPE_3__* ae_handle; int * tqp_vector; } ;
struct TYPE_6__ {int num_tqps; int * tqp; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hnae3_ae_ops {int (* stop ) (TYPE_3__*) ;} ;
struct TYPE_8__ {TYPE_2__* ae_algo; } ;
struct TYPE_7__ {struct hnae3_ae_ops* ops; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct hnae3_handle* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hns3_nic_priv*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 struct hns3_nic_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_0)
{
 struct hns3_nic_priv *VAR_1 = FUNC_8(VAR_0);
 struct hnae3_handle *VAR_2 = FUNC_2(VAR_0);
 const struct hnae3_ae_ops *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1->vector_num; VAR_4++)
  FUNC_7(&VAR_1->tqp_vector[VAR_4]);


 for (VAR_4 = 0; VAR_4 < VAR_2->kinfo.num_tqps; VAR_4++)
  FUNC_6(VAR_2->kinfo.tqp[VAR_4]);


 VAR_3 = VAR_1->ae_handle->ae_algo->ops;
 if (VAR_3->stop)
  VAR_3->stop(VAR_1->ae_handle);

 FUNC_1(VAR_0);


 FUNC_4(VAR_1);





 if (!FUNC_3(VAR_0))
  FUNC_0(VAR_1->ae_handle, 0);

 FUNC_5(VAR_1->ae_handle);
}
