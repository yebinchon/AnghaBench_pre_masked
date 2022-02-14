
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_geneve {scalar_t__ opt_class; scalar_t__ opt_type; int obj_id; int sync_lock; scalar_t__ refcount; int mdev; } ;
struct geneve_opt {scalar_t__ opt_class; scalar_t__ type; int length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_geneve*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int ,scalar_t__,int ,...) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mlx5_geneve *VAR_1, struct geneve_opt *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_4(&VAR_1->sync_lock);

 if (VAR_1->refcount) {
  if (VAR_1->opt_class == VAR_2->opt_class &&
      VAR_1->opt_type == VAR_2->type) {

   VAR_1->refcount++;
  } else {




   FUNC_2(VAR_1->mdev,
           "Won't create Geneve TLV opt object with class:type:len = 0x%x:0x%x:%d (another class:type already exists)\n",
           FUNC_1(VAR_2->opt_class),
           VAR_2->type,
           VAR_2->length);
   VAR_3 = -VAR_0;
   goto unlock;
  }
 } else {


  VAR_3 = FUNC_3(VAR_1->mdev,
          VAR_2->opt_class,
          VAR_2->type,
          VAR_2->length);
  if (VAR_3 < 0) {
   FUNC_2(VAR_1->mdev,
           "Failed creating Geneve TLV opt object class:type:len = 0x%x:0x%x:%d (err=%d)\n",
           FUNC_1(VAR_2->opt_class),
           VAR_2->type, VAR_2->length, VAR_3);
   goto unlock;
  }
  VAR_1->opt_class = VAR_2->opt_class;
  VAR_1->opt_type = VAR_2->type;
  VAR_1->obj_id = VAR_3;
  VAR_1->refcount++;
 }

unlock:
 FUNC_5(&VAR_1->sync_lock);
 return VAR_3;
}
