
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rpmsg_eptdev {int readq; int queue_lock; int queue; } ;
struct rpmsg_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,void*,int) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rpmsg_device *VAR_2, void *VAR_3, int VAR_4,
   void *VAR_5, u32 VAR_6)
{
 struct rpmsg_eptdev *VAR_7 = VAR_5;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_8, VAR_3, VAR_4);

 FUNC_3(&VAR_7->queue_lock);
 FUNC_2(&VAR_7->queue, VAR_8);
 FUNC_4(&VAR_7->queue_lock);


 FUNC_5(&VAR_7->readq);

 return 0;
}
