
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct virtchnl_iwarp_qvlist_info {scalar_t__ num_vectors; } ;
struct iavf_qvlist_info {size_t num_vectors; struct iavf_qv_info* qv_info; } ;
struct iavf_qv_info {size_t v_idx; } ;
struct iavf_info {struct iavf_adapter* vf; } ;
struct iavf_client {int dummy; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct TYPE_6__ {TYPE_2__ aq; } ;
struct iavf_adapter {size_t iwarp_base_vector; size_t num_iwarp_msix; int client_pending; TYPE_3__ hw; TYPE_1__* pdev; scalar_t__ aq_required; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int *,size_t,int *) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (struct virtchnl_iwarp_qvlist_info*,struct iavf_qv_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iavf_info *VAR_5,
        struct iavf_client *VAR_6,
        struct iavf_qvlist_info *VAR_7)
{
 struct virtchnl_iwarp_qvlist_info *VAR_8;
 struct iavf_adapter *VAR_9 = VAR_5->vf;
 struct iavf_qv_info *VAR_10;
 enum iavf_status VAR_11;
 u32 VAR_12, VAR_13;
 size_t VAR_14;

 if (VAR_9->aq_required)
  return -VAR_0;


 for (VAR_13 = 0; VAR_13 < VAR_7->num_vectors; VAR_13++) {
  VAR_10 = &VAR_7->qv_info[VAR_13];
  if (!VAR_10)
   continue;
  VAR_12 = VAR_10->v_idx;
  if ((VAR_12 >=
      (VAR_9->iwarp_base_vector + VAR_9->num_iwarp_msix)) ||
      (VAR_12 < VAR_9->iwarp_base_vector))
   return -VAR_2;
 }

 VAR_8 = (struct virtchnl_iwarp_qvlist_info *)VAR_7;
 VAR_14 = FUNC_4(VAR_8, VAR_10,
          VAR_8->num_vectors - 1);

 VAR_9->client_pending |= FUNC_0(VAR_4);
 VAR_11 = FUNC_2(&VAR_9->hw,
    VAR_4, VAR_3,
    (u8 *)VAR_8, VAR_14, ((void*)0));

 if (VAR_11) {
  FUNC_1(&VAR_9->pdev->dev,
   "Unable to send iWarp vector config message to PF, error %d, aq status %d\n",
   VAR_11, VAR_9->hw.aq.asq_last_status);
  goto out;
 }

 VAR_11 = -VAR_1;
 for (VAR_13 = 0; VAR_13 < 5; VAR_13++) {
  FUNC_3(100);
  if (!(VAR_9->client_pending &
        FUNC_0(VAR_4))) {
   VAR_11 = 0;
   break;
  }
 }
out:
 return VAR_11;
}
