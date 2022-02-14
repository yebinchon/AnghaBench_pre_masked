
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct aq_nic_s {size_t aq_vecs; TYPE_1__* ndev; int * aq_vec; int fwreq_mutex; int aq_hw; TYPE_4__* aq_fw_ops; } ;
struct TYPE_9__ {size_t vecs; } ;
struct TYPE_8__ {int (* get_mac_permanent ) (int ,int ) ;} ;
struct TYPE_7__ {int dev_addr; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*,size_t,TYPE_5__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,TYPE_4__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct aq_nic_s *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3->ndev) {
  VAR_4 = -VAR_1;
  goto err_exit;
 }

 VAR_4 = FUNC_3(VAR_3->aq_hw, &VAR_3->aq_fw_ops);
 if (VAR_4)
  goto err_exit;

 FUNC_4(&VAR_3->fwreq_mutex);
 VAR_4 = VAR_3->aq_fw_ops->get_mac_permanent(VAR_3->aq_hw,
       VAR_3->ndev->dev_addr);
 FUNC_5(&VAR_3->fwreq_mutex);
 if (VAR_4)
  goto err_exit;
 for (VAR_3->aq_vecs = 0; VAR_3->aq_vecs < FUNC_0(VAR_3)->vecs;
      VAR_3->aq_vecs++) {
  VAR_3->aq_vec[VAR_3->aq_vecs] =
      FUNC_1(VAR_3, VAR_3->aq_vecs, FUNC_0(VAR_3));
  if (!VAR_3->aq_vec[VAR_3->aq_vecs]) {
   VAR_4 = -VAR_2;
   goto err_exit;
  }
 }

 FUNC_6(VAR_3->ndev);

 FUNC_7(VAR_3->ndev);

 VAR_4 = FUNC_8(VAR_3->ndev);
 if (VAR_4)
  goto err_exit;

err_exit:
 return VAR_4;
}
