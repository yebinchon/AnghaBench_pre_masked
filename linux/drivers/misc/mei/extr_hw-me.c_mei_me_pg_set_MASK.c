
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {int dummy; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mei_me_hw*,int ) ;
 int FUNC_1 (struct mei_me_hw*,int ,int ) ;
 struct mei_me_hw* FUNC_2 (struct mei_device*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mei_device *VAR_2)
{
 struct mei_me_hw *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_2->dev, "H_HPG_CSR", VAR_0, VAR_4);

 VAR_4 |= VAR_1;

 FUNC_4(VAR_2->dev, "H_HPG_CSR", VAR_0, VAR_4);
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
