
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_txe_hw {scalar_t__ aliveness; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mei_device*) ;
 scalar_t__ FUNC_2 (struct mei_device*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_device*,int ) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_txe_hw*,int ) ;
 struct mei_txe_hw* FUNC_8 (struct mei_device*) ;

__attribute__((used)) static int FUNC_9(struct mei_device *VAR_2, bool VAR_3)
{
 struct mei_txe_hw *VAR_4 = FUNC_8(VAR_2);

 u32 VAR_5;




 (void)FUNC_7(VAR_4, VAR_1);

 VAR_5 = FUNC_3(VAR_2);
 VAR_4->aliveness = FUNC_1(VAR_2);


 FUNC_5(VAR_2);






 if (VAR_5 != VAR_4->aliveness)
  if (FUNC_2(VAR_2, VAR_5) < 0) {
   FUNC_0(VAR_2->dev, "wait for aliveness settle failed ... bailing out\n");
   return -VAR_0;
  }




 if (VAR_5) {
  FUNC_4(VAR_2, 0);
  if (FUNC_2(VAR_2, 0) < 0) {
   FUNC_0(VAR_2->dev, "wait for aliveness failed ... bailing out\n");
   return -VAR_0;
  }
 }




 FUNC_6(VAR_2);

 return 0;
}
