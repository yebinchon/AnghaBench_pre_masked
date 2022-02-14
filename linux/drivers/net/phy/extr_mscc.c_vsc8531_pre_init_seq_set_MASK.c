
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_0; int member_1; int val; int reg; } ;
struct phy_device {int lock; } ;


 unsigned int FUNC_0 (struct reg_val const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*,int ,int ,int,int) ;
 int FUNC_4 (struct phy_device*,int,int) ;
 int FUNC_5 (struct phy_device*,int ) ;
 int FUNC_6 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_8)
{
 int VAR_9;
 const struct reg_val VAR_10[] = {
  {0x0f90, 0x00688980},
  {0x0696, 0x00000003},
  {0x07fa, 0x0050100f},
  {0x1686, 0x00000004},
 };
 unsigned int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_8, VAR_1,
         VAR_0, VAR_7,
         VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_3(VAR_8, VAR_2,
         VAR_4, 0, 0x0400);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_3(VAR_8, VAR_2,
         VAR_5, 0x0a00, 0x0e00);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_3(VAR_8, VAR_2,
         VAR_6, 0x8000, 0x8000);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_1(&VAR_8->lock);
 VAR_12 = FUNC_5(VAR_8, VAR_3);
 if (VAR_12 < 0)
  goto out_unlock;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++)
  FUNC_6(VAR_8, VAR_10[VAR_11].reg, VAR_10[VAR_11].val);

out_unlock:
 VAR_12 = FUNC_4(VAR_8, VAR_12, VAR_12);
 FUNC_2(&VAR_8->lock);

 return VAR_12;
}
