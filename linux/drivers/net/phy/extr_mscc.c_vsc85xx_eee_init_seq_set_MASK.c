
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_0; int member_1; int val; int reg; } ;
struct phy_device {int lock; } ;


 unsigned int FUNC_0 (struct reg_val const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*,int,int) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_1)
{
 const struct reg_val VAR_2[] = {
  {0x0f82, 0x0012b00a},
  {0x1686, 0x00000004},
  {0x168c, 0x00d2c46f},
  {0x17a2, 0x00000620},
  {0x16a0, 0x00eeffdd},
  {0x16a6, 0x00071448},
  {0x16a4, 0x0013132f},
  {0x16a8, 0x00000000},
  {0x0ffc, 0x00c0a028},
  {0x0fe8, 0x0091b06c},
  {0x0fea, 0x00041600},
  {0x0f80, 0x00000af4},
  {0x0fec, 0x00901809},
  {0x0fee, 0x0000a6a1},
  {0x0ffe, 0x00b01007},
  {0x16b0, 0x00eeff00},
  {0x16b2, 0x00007000},
  {0x16b4, 0x00000814},
 };
 unsigned int VAR_3;
 int VAR_4;

 FUNC_1(&VAR_1->lock);
 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (VAR_4 < 0)
  goto out_unlock;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  FUNC_5(VAR_1, VAR_2[VAR_3].reg, VAR_2[VAR_3].val);

out_unlock:
 VAR_4 = FUNC_3(VAR_1, VAR_4, VAR_4);
 FUNC_2(&VAR_1->lock);

 return VAR_4;
}
