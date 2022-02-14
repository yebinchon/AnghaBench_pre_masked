
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_txe_hw {scalar_t__ aliveness; } ;
struct mei_device {int dev; void* pg_event; } ;
typedef int ktime_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct mei_device*) ;
 int FUNC_8 (int ) ;
 struct mei_txe_hw* FUNC_9 (struct mei_device*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct mei_device *VAR_3, u32 VAR_4)
{
 struct mei_txe_hw *VAR_5 = FUNC_9(VAR_3);
 ktime_t VAR_6, VAR_7;

 VAR_7 = FUNC_4();
 VAR_6 = FUNC_2(VAR_7, FUNC_8(VAR_2));
 do {
  VAR_5->aliveness = FUNC_7(VAR_3);
  if (VAR_5->aliveness == VAR_4) {
   VAR_3->pg_event = VAR_1;
   FUNC_0(VAR_3->dev, "aliveness settled after %lld usecs\n",
    FUNC_6(FUNC_5(FUNC_4(), VAR_7)));
   return 0;
  }
  FUNC_10(20, 50);
 } while (FUNC_3(FUNC_4(), VAR_6));

 VAR_3->pg_event = VAR_1;
 FUNC_1(VAR_3->dev, "aliveness timed out\n");
 return -VAR_0;
}
