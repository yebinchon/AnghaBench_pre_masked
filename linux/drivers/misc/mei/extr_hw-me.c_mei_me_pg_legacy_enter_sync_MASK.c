
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mei_device*,int ) ;
 int FUNC_1 (struct mei_device*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mei_me_hw* FUNC_5 (struct mei_device*) ;
 int FUNC_6 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mei_device *VAR_7)
{
 struct mei_me_hw *VAR_8 = FUNC_5(VAR_7);
 unsigned long VAR_9 = FUNC_2(VAR_1);
 int VAR_10;

 VAR_7->pg_event = VAR_4;

 VAR_10 = FUNC_0(VAR_7, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_4(&VAR_7->device_lock);
 FUNC_6(VAR_7->wait_pg,
  VAR_7->pg_event == VAR_3, VAR_9);
 FUNC_3(&VAR_7->device_lock);

 if (VAR_7->pg_event == VAR_3) {
  FUNC_1(VAR_7);
  VAR_10 = 0;
 } else {
  VAR_10 = -VAR_0;
 }

 VAR_7->pg_event = VAR_2;
 VAR_8->pg_state = VAR_6;

 return VAR_10;
}
