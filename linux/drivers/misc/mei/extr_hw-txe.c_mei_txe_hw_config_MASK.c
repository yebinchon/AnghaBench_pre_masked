
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_txe_hw {int readiness; int aliveness; } ;
struct mei_device {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*) ;
 struct mei_txe_hw* FUNC_3 (struct mei_device*) ;

__attribute__((used)) static void FUNC_4(struct mei_device *VAR_0)
{

 struct mei_txe_hw *VAR_1 = FUNC_3(VAR_0);

 VAR_1->aliveness = FUNC_1(VAR_0);
 VAR_1->readiness = FUNC_2(VAR_0);

 FUNC_0(VAR_0->dev, "aliveness_resp = 0x%08x, readiness = 0x%08x.\n",
  VAR_1->aliveness, VAR_1->readiness);
}
