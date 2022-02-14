
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct rvin_group {int lock; int mdev; struct rvin_dev** vin; int refcount; } ;
struct TYPE_4__ {int * mdev; } ;
struct rvin_dev {size_t id; TYPE_2__ v4l2_dev; struct rvin_group* group; TYPE_1__* dev; } ;
struct TYPE_3__ {size_t of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rvin_group*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct rvin_group* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t,char*,size_t*) ;
 struct rvin_group* VAR_4 ;
 int FUNC_8 (struct rvin_group*,struct rvin_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct rvin_dev*,char*,...) ;

__attribute__((used)) static int FUNC_10(struct rvin_dev *VAR_7)
{
 struct rvin_group *VAR_8;
 u32 VAR_9;
 int VAR_10;


 VAR_10 = FUNC_7(VAR_7->dev->of_node, "renesas,id", &VAR_9);
 if (VAR_10) {
  FUNC_9(VAR_7, "%pOF: No renesas,id property found\n",
   VAR_7->dev->of_node);
  return -VAR_0;
 }

 if (VAR_9 >= VAR_3) {
  FUNC_9(VAR_7, "%pOF: Invalid renesas,id '%u'\n",
   VAR_7->dev->of_node, VAR_9);
  return -VAR_0;
 }


 FUNC_5(&VAR_5);
 if (VAR_4) {
  VAR_8 = VAR_4;
  FUNC_1(&VAR_8->refcount);
 } else {
  VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
  if (!VAR_8) {
   VAR_10 = -VAR_1;
   goto err_group;
  }

  VAR_10 = FUNC_8(VAR_8, VAR_7);
  if (VAR_10) {
   FUNC_0(VAR_8);
   FUNC_9(VAR_7, "Failed to initialize group\n");
   goto err_group;
  }

  FUNC_2(&VAR_8->refcount);

  VAR_4 = VAR_8;
 }
 FUNC_6(&VAR_5);


 FUNC_5(&VAR_8->lock);

 if (VAR_8->vin[VAR_9]) {
  FUNC_9(VAR_7, "Duplicate renesas,id property value %u\n", VAR_9);
  FUNC_6(&VAR_8->lock);
  FUNC_3(&VAR_8->refcount, VAR_6);
  return -VAR_0;
 }

 VAR_8->vin[VAR_9] = VAR_7;

 VAR_7->id = VAR_9;
 VAR_7->group = VAR_8;
 VAR_7->v4l2_dev.mdev = &VAR_8->mdev;

 FUNC_6(&VAR_8->lock);

 return 0;
err_group:
 FUNC_6(&VAR_5);
 return VAR_10;
}
