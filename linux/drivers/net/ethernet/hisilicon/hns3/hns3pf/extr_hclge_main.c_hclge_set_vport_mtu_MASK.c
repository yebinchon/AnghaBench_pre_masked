
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_vport {int mps; scalar_t__ vport_id; struct hclge_dev* back; } ;
struct hclge_dev {int mps; int num_alloc_vport; int vport_lock; TYPE_2__* pdev; TYPE_1__* vport; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int mps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 int FUNC_3 (struct hclge_dev*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct hclge_vport *VAR_9, int VAR_10)
{
 struct hclge_dev *VAR_11 = VAR_9->back;
 int VAR_12, VAR_13, VAR_14;

 VAR_13 = VAR_10 + VAR_2 + VAR_1 + 2 * VAR_8;
 if (VAR_13 < VAR_5 ||
     VAR_13 > VAR_4)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_13, VAR_3);
 FUNC_5(&VAR_11->vport_lock);

 if (VAR_9->vport_id && VAR_13 > VAR_11->mps) {
  FUNC_6(&VAR_11->vport_lock);
  return -VAR_0;
 } else if (VAR_9->vport_id) {
  VAR_9->mps = VAR_13;
  FUNC_6(&VAR_11->vport_lock);
  return 0;
 }


 for (VAR_12 = 1; VAR_12 < VAR_11->num_alloc_vport; VAR_12++)
  if (VAR_13 < VAR_11->vport[VAR_12].mps) {
   FUNC_6(&VAR_11->vport_lock);
   return -VAR_0;
  }

 FUNC_2(VAR_11, VAR_6);

 VAR_14 = FUNC_3(VAR_11, VAR_13);
 if (VAR_14) {
  FUNC_0(&VAR_11->pdev->dev,
   "Change mtu fail, ret =%d\n", VAR_14);
  goto out;
 }

 VAR_11->mps = VAR_13;
 VAR_9->mps = VAR_13;

 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14)
  FUNC_0(&VAR_11->pdev->dev,
   "Allocate buffer fail, ret =%d\n", VAR_14);

out:
 FUNC_2(VAR_11, VAR_7);
 FUNC_6(&VAR_11->vport_lock);
 return VAR_14;
}
