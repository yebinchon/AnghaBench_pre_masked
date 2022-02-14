
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int aliveness; } ;
struct mei_device {int pg_event; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct mei_txe_hw*,int ,int ) ;
 struct mei_txe_hw* FUNC_2 (struct mei_device*) ;

__attribute__((used)) static bool FUNC_3(struct mei_device *VAR_2, u32 VAR_3)
{

 struct mei_txe_hw *VAR_4 = FUNC_2(VAR_2);
 bool VAR_5 = VAR_4->aliveness != VAR_3;

 FUNC_0(VAR_2->dev, "Aliveness current=%d request=%d\n",
    VAR_4->aliveness, VAR_3);
 if (VAR_5) {
  VAR_2->pg_event = VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_3);
 }
 return VAR_5;
}
