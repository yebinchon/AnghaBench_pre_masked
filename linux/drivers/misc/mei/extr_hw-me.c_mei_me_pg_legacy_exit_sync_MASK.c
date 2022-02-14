
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_hw {int pg_state; } ;
struct mei_device {scalar_t__ pg_event; int device_lock; int wait_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mei_device*,int ) ;
 int FUNC_1 (struct mei_device*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mei_me_hw* FUNC_5 (struct mei_device*) ;
 int FUNC_6 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mei_device *VAR_9)
{
 struct mei_me_hw *VAR_10 = FUNC_5(VAR_9);
 unsigned long VAR_11 = FUNC_2(VAR_1);
 int VAR_12;

 if (VAR_9->pg_event == VAR_5)
  goto reply;

 VAR_9->pg_event = VAR_6;

 FUNC_1(VAR_9);

 FUNC_4(&VAR_9->device_lock);
 FUNC_6(VAR_9->wait_pg,
  VAR_9->pg_event == VAR_5, VAR_11);
 FUNC_3(&VAR_9->device_lock);

reply:
 if (VAR_9->pg_event != VAR_5) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_9->pg_event = VAR_4;
 VAR_12 = FUNC_0(VAR_9, VAR_7);
 if (VAR_12)
  return VAR_12;

 FUNC_4(&VAR_9->device_lock);
 FUNC_6(VAR_9->wait_pg,
  VAR_9->pg_event == VAR_3, VAR_11);
 FUNC_3(&VAR_9->device_lock);

 if (VAR_9->pg_event == VAR_3)
  VAR_12 = 0;
 else
  VAR_12 = -VAR_0;

out:
 VAR_9->pg_event = VAR_2;
 VAR_10->pg_state = VAR_8;

 return VAR_12;
}
