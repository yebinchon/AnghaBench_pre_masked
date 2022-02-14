
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_txe_hw {scalar_t__ aliveness; int wait_aliveness_resp; } ;
struct mei_device {int pg_event; int dev; int device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,long,scalar_t__,int ) ;
 int FUNC_2 (unsigned long const) ;
 void* FUNC_3 (struct mei_device*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mei_txe_hw* FUNC_7 (struct mei_device*) ;
 long FUNC_8 (int ,int,unsigned long const) ;

__attribute__((used)) static int FUNC_9(struct mei_device *VAR_4, u32 VAR_5)
{
 struct mei_txe_hw *VAR_6 = FUNC_7(VAR_4);
 const unsigned long VAR_7 =
   FUNC_4(VAR_3);
 long VAR_8;
 int VAR_9;

 VAR_6->aliveness = FUNC_3(VAR_4);
 if (VAR_6->aliveness == VAR_5)
  return 0;

 FUNC_6(&VAR_4->device_lock);
 VAR_8 = FUNC_8(VAR_6->wait_aliveness_resp,
   VAR_4->pg_event == VAR_2, VAR_7);
 FUNC_5(&VAR_4->device_lock);

 VAR_6->aliveness = FUNC_3(VAR_4);
 VAR_9 = VAR_6->aliveness == VAR_5 ? 0 : -VAR_0;

 if (VAR_9)
  FUNC_1(VAR_4->dev, "aliveness timed out = %ld aliveness = %d event = %d\n",
   VAR_8, VAR_6->aliveness, VAR_4->pg_event);
 else
  FUNC_0(VAR_4->dev, "aliveness settled after = %d msec aliveness = %d event = %d\n",
   FUNC_2(VAR_7 - VAR_8),
   VAR_6->aliveness, VAR_4->pg_event);

 VAR_4->pg_event = VAR_1;
 return VAR_9;
}
