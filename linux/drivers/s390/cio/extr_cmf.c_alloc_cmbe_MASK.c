
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmbe {int dummy; } ;
struct cmb_data {int size; struct cmb_data* last_block; struct cmbe* hw_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {int lock; int list; } ;
struct TYPE_3__ {int cmb_list; struct cmb_data* cmb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cmb_data*) ;
 int FUNC_2 (int ,struct cmbe*) ;
 struct cmbe* FUNC_3 (int ,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ccw_device *VAR_6)
{
 struct cmb_data *VAR_7;
 struct cmbe *VAR_8;
 int VAR_9 = -VAR_2;

 VAR_8 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_8)
  return VAR_9;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  goto out_free;

 VAR_7->last_block = FUNC_4(sizeof(struct cmbe), VAR_3);
 if (!VAR_7->last_block)
  goto out_free;

 VAR_7->size = sizeof(*VAR_8);
 VAR_7->hw_block = VAR_8;

 FUNC_7(&VAR_4.lock);
 FUNC_8(VAR_6->ccwlock);
 if (VAR_6->private->cmb)
  goto out_unlock;

 VAR_6->private->cmb = VAR_7;


 if (FUNC_6(&VAR_4.list))
  FUNC_0(((void*)0), VAR_0);
 FUNC_5(&VAR_6->private->cmb_list, &VAR_4.list);

 FUNC_10(VAR_6->ccwlock);
 FUNC_9(&VAR_4.lock);
 return 0;

out_unlock:
 FUNC_10(VAR_6->ccwlock);
 FUNC_9(&VAR_4.lock);
 VAR_9 = -VAR_1;
out_free:
 if (VAR_7)
  FUNC_1(VAR_7->last_block);
 FUNC_1(VAR_7);
 FUNC_2(VAR_5, VAR_8);

 return VAR_9;
}
