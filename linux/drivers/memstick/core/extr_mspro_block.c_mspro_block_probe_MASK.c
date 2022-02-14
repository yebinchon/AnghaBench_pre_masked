
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_block_data {int attr_group; int q_lock; struct memstick_dev* card; } ;
struct TYPE_2__ {int kobj; } ;
struct memstick_dev {TYPE_1__ dev; int start; int stop; int check; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mspro_block_data*) ;
 struct mspro_block_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct memstick_dev*,struct mspro_block_data*) ;
 int VAR_2 ;
 int FUNC_3 (struct mspro_block_data*) ;
 int FUNC_4 (struct memstick_dev*) ;
 int FUNC_5 (struct memstick_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct memstick_dev *VAR_5)
{
 struct mspro_block_data *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(sizeof(struct mspro_block_data), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_2(VAR_5, VAR_6);
 VAR_6->card = VAR_5;
 FUNC_6(&VAR_6->q_lock);

 VAR_7 = FUNC_4(VAR_5);

 if (VAR_7)
  goto out_free;

 VAR_7 = FUNC_7(&VAR_5->dev.kobj, &VAR_6->attr_group);
 if (VAR_7)
  goto out_free;

 VAR_7 = FUNC_5(VAR_5);
 if (!VAR_7) {
  VAR_5->check = VAR_2;
  VAR_5->stop = VAR_4;
  VAR_5->start = VAR_3;
  return 0;
 }

 FUNC_8(&VAR_5->dev.kobj, &VAR_6->attr_group);
out_free:
 FUNC_2(VAR_5, ((void*)0));
 FUNC_3(VAR_6);
 FUNC_0(VAR_6);
 return VAR_7;
}
