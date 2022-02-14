
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * bus; int release; int parent; } ;
struct scif_peer_dev {int dnode; TYPE_3__ dev; } ;
struct scif_dev {int node; TYPE_1__* sdev; int spdev; } ;
struct TYPE_10__ {int parent; } ;
struct TYPE_8__ {int conflock; int maxid; int total; } ;
struct TYPE_7__ {TYPE_6__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*,int ,int) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct scif_peer_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct scif_peer_dev*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct scif_dev *VAR_6)
{
 struct scif_peer_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_7->dev.parent = VAR_6->sdev->dev.parent;
 VAR_7->dev.release = VAR_4;
 VAR_7->dnode = VAR_6->node;
 VAR_7->dev.bus = &VAR_3;
 FUNC_1(&VAR_7->dev, "scif_peer-dev%u", VAR_7->dnode);

 FUNC_2(&VAR_7->dev);
 FUNC_3(&VAR_7->dev);
 FUNC_8(VAR_6->spdev, VAR_7);

 FUNC_6(&VAR_2.conflock);
 VAR_2.total++;
 VAR_2.maxid = FUNC_5(VAR_5, VAR_7->dnode, VAR_2.maxid);
 FUNC_7(&VAR_2.conflock);
 return 0;
err:
 FUNC_0(&VAR_6->sdev->dev,
  "dnode %d: initialize_device rc %d\n", VAR_6->node, VAR_8);
 return VAR_8;
}
