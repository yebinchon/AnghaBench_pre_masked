
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hclge_dev {scalar_t__ wanted_umv_size; int max_umv_size; int priv_umv_size; int num_req_vfs; int share_umv_size; int umv_mutex; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_0)
{
 u16 VAR_1 = 0;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->wanted_umv_size, &VAR_1,
      1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1 < VAR_0->wanted_umv_size)
  FUNC_0(&VAR_0->pdev->dev,
    "Alloc umv space failed, want %d, get %d\n",
    VAR_0->wanted_umv_size, VAR_1);

 FUNC_2(&VAR_0->umv_mutex);
 VAR_0->max_umv_size = VAR_1;




 VAR_0->priv_umv_size = VAR_0->max_umv_size / (VAR_0->num_req_vfs + 2);
 VAR_0->share_umv_size = VAR_0->priv_umv_size +
   VAR_0->max_umv_size % (VAR_0->num_req_vfs + 2);

 return 0;
}
