
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uprobe_consumer {int ret_handler; int handler; } ;
struct uprobe {int register_rwsem; } ;
struct inode {TYPE_2__* i_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* a_ops; } ;
struct TYPE_3__ {int readpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uprobe*) ;
 int FUNC_1 (struct uprobe*) ;
 int FUNC_2 (struct uprobe*,struct uprobe_consumer*) ;
 struct uprobe* FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct uprobe*,struct uprobe_consumer*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct uprobe*) ;
 int FUNC_9 (struct uprobe*,struct uprobe_consumer*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct uprobe*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, loff_t VAR_5,
        loff_t VAR_6, struct uprobe_consumer *VAR_7)
{
 struct uprobe *VAR_8;
 int VAR_9;


 if (!VAR_7->handler && !VAR_7->ret_handler)
  return -VAR_1;


 if (!VAR_4->i_mapping->a_ops->readpage && !FUNC_10(VAR_4->i_mapping))
  return -VAR_2;

 if (VAR_5 > FUNC_6(VAR_4))
  return -VAR_1;

 retry:
 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (!VAR_8)
  return -VAR_3;
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);





 FUNC_5(&VAR_8->register_rwsem);
 VAR_9 = -VAR_0;
 if (FUNC_7(FUNC_13(VAR_8))) {
  FUNC_4(VAR_8, VAR_7);
  VAR_9 = FUNC_9(VAR_8, VAR_7);
  if (VAR_9)
   FUNC_2(VAR_8, VAR_7);
 }
 FUNC_12(&VAR_8->register_rwsem);
 FUNC_8(VAR_8);

 if (FUNC_11(VAR_9 == -VAR_0))
  goto retry;
 return VAR_9;
}
