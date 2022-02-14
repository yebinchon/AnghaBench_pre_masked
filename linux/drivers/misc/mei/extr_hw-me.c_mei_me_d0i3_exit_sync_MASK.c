
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mei_me_hw* FUNC_6 (struct mei_device*) ;
 int FUNC_7 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct mei_device *VAR_8)
{
 struct mei_me_hw *VAR_9 = FUNC_6(VAR_8);
 unsigned long VAR_10 = FUNC_3(VAR_3);
 int VAR_11;
 u32 VAR_12;

 VAR_8->pg_event = VAR_6;

 VAR_12 = FUNC_2(VAR_8);
 if (!(VAR_12 & VAR_2)) {

  FUNC_0(VAR_8->dev, "d0i3 exit not needed\n");
  VAR_11 = 0;
  goto off;
 }

 VAR_12 = FUNC_1(VAR_8);
 if (!(VAR_12 & VAR_1)) {
  FUNC_0(VAR_8->dev, "d0i3 exit wait not needed\n");
  VAR_11 = 0;
  goto off;
 }

 FUNC_5(&VAR_8->device_lock);
 FUNC_7(VAR_8->wait_pg,
  VAR_8->pg_event == VAR_5, VAR_10);
 FUNC_4(&VAR_8->device_lock);

 if (VAR_8->pg_event != VAR_5) {
  VAR_12 = FUNC_2(VAR_8);
  if (VAR_12 & VAR_2) {
   VAR_11 = -VAR_0;
   goto out;
  }
 }

 VAR_11 = 0;
off:
 VAR_9->pg_state = VAR_7;
out:
 VAR_8->pg_event = VAR_4;

 FUNC_0(VAR_8->dev, "d0i3 exit ret = %d\n", VAR_11);
 return VAR_11;
}
