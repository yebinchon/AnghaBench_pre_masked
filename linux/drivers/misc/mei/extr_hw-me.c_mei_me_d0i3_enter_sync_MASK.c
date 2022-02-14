
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {int pg_state; } ;
struct mei_device {scalar_t__ pg_event; int dev; int device_lock; int wait_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mei_device*,int ) ;
 int FUNC_2 (struct mei_device*,int) ;
 int FUNC_3 (struct mei_device*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mei_me_hw* FUNC_7 (struct mei_device*) ;
 int FUNC_8 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mei_device *VAR_12)
{
 struct mei_me_hw *VAR_13 = FUNC_7(VAR_12);
 unsigned long VAR_14 = FUNC_4(VAR_3);
 unsigned long VAR_15 = FUNC_4(VAR_4);
 int VAR_16;
 u32 VAR_17;

 VAR_17 = FUNC_3(VAR_12);
 if (VAR_17 & VAR_2) {

  FUNC_0(VAR_12->dev, "d0i3 set not needed\n");
  VAR_16 = 0;
  goto on;
 }


 VAR_12->pg_event = VAR_9;

 VAR_16 = FUNC_1(VAR_12, VAR_10);
 if (VAR_16)

  goto out;

 FUNC_6(&VAR_12->device_lock);
 FUNC_8(VAR_12->wait_pg,
  VAR_12->pg_event == VAR_8, VAR_15);
 FUNC_5(&VAR_12->device_lock);

 if (VAR_12->pg_event != VAR_8) {
  VAR_16 = -VAR_0;
  goto out;
 }


 VAR_12->pg_event = VAR_7;

 VAR_17 = FUNC_2(VAR_12, 1);
 if (!(VAR_17 & VAR_1)) {
  FUNC_0(VAR_12->dev, "d0i3 enter wait not needed\n");
  VAR_16 = 0;
  goto on;
 }

 FUNC_6(&VAR_12->device_lock);
 FUNC_8(VAR_12->wait_pg,
  VAR_12->pg_event == VAR_6, VAR_14);
 FUNC_5(&VAR_12->device_lock);

 if (VAR_12->pg_event != VAR_6) {
  VAR_17 = FUNC_3(VAR_12);
  if (!(VAR_17 & VAR_2)) {
   VAR_16 = -VAR_0;
   goto out;
  }
 }

 VAR_16 = 0;
on:
 VAR_13->pg_state = VAR_11;
out:
 VAR_12->pg_event = VAR_5;
 FUNC_0(VAR_12->dev, "d0i3 enter ret = %d\n", VAR_16);
 return VAR_16;
}
