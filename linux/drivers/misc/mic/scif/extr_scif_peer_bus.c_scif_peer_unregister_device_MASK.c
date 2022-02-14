
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_peer_dev {int dev; int dnode; } ;
struct scif_dev {int lock; int spdev; int peer_add_work; } ;
struct TYPE_2__ {int conflock; int total; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct scif_peer_dev* FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 () ;

int FUNC_8(struct scif_dev *VAR_2)
{
 struct scif_peer_dev *VAR_3;

 FUNC_4(&VAR_2->lock);

 FUNC_3(&VAR_2->peer_add_work);





 VAR_3 = FUNC_6(VAR_2->spdev);
 if (!VAR_3) {
  FUNC_5(&VAR_2->lock);
  return -VAR_0;
 }

 FUNC_0(VAR_2->spdev, ((void*)0));
 FUNC_7();
 FUNC_5(&VAR_2->lock);

 FUNC_1(&VAR_3->dev, "Removing peer dnode %d\n", VAR_3->dnode);
 FUNC_2(&VAR_3->dev);

 FUNC_4(&VAR_1.conflock);
 VAR_1.total--;
 FUNC_5(&VAR_1.conflock);
 return 0;
}
