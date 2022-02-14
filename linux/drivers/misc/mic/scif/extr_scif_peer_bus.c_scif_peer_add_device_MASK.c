
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_status {int dummy; } ;
struct scif_peer_dev {int dev; int dnode; } ;
struct scif_dev {int spdev; int node; TYPE_1__* sdev; int signal_pool; } ;
typedef int pool_name ;
struct TYPE_4__ {int conflock; int total; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int *,int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct scif_peer_dev* FUNC_9 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_10 (char*,int,char*,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct scif_dev *VAR_2)
{
 struct scif_peer_dev *VAR_3 = FUNC_9(VAR_2->spdev);
 char VAR_4[16];
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_3->dev);
 FUNC_8(&VAR_3->dev);
 if (VAR_5) {
  FUNC_2(&VAR_2->sdev->dev,
   "dnode %d: peer device_add failed\n", VAR_2->node);
  goto put_spdev;
 }

 FUNC_10(VAR_4, sizeof(VAR_4), "scif-%d", VAR_3->dnode);
 VAR_2->signal_pool = FUNC_5(VAR_4, &VAR_2->sdev->dev,
      sizeof(struct scif_status), 1,
      0);
 if (!VAR_2->signal_pool) {
  FUNC_2(&VAR_2->sdev->dev,
   "dnode %d: dmam_pool_create failed\n", VAR_2->node);
  VAR_5 = -VAR_0;
  goto del_spdev;
 }
 FUNC_1(&VAR_3->dev, "Added peer dnode %d\n", VAR_3->dnode);
 return 0;
del_spdev:
 FUNC_4(&VAR_3->dev);
put_spdev:
 FUNC_0(VAR_2->spdev, ((void*)0));
 FUNC_11();
 FUNC_8(&VAR_3->dev);

 FUNC_6(&VAR_1.conflock);
 VAR_1.total--;
 FUNC_7(&VAR_1.conflock);
 return VAR_5;
}
