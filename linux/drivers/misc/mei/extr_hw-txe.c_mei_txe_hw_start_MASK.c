
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int intr_cause; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mei_device*,int) ;
 int FUNC_3 (struct mei_txe_hw*,int ) ;
 int FUNC_4 (struct mei_txe_hw*,int ,int) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_txe_hw*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (int ) ;
 struct mei_txe_hw* FUNC_11 (struct mei_device*) ;

__attribute__((used)) static int FUNC_12(struct mei_device *VAR_3)
{
 struct mei_txe_hw *VAR_4 = FUNC_11(VAR_3);
 int VAR_5;

 u32 VAR_6;


 FUNC_6(VAR_3);

 VAR_5 = FUNC_9(VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->dev, "waiting for readiness failed\n");
  return VAR_5;
 }




 VAR_6 = FUNC_3(VAR_4, VAR_1);
 if (VAR_6 & VAR_0)
  FUNC_4(VAR_4, VAR_1, VAR_0);


 FUNC_0(VAR_2, &VAR_4->intr_cause);

 VAR_5 = FUNC_2(VAR_3, 1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->dev, "wait for aliveness failed ... bailing out\n");
  return VAR_5;
 }

 FUNC_10(VAR_3->dev);




 FUNC_5(VAR_3);



 FUNC_7(VAR_4);



 FUNC_8(VAR_3);

 return 0;
}
