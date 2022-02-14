
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int lock; int mdix_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_6)
{
 int VAR_7;
 u16 VAR_8;

 VAR_6->mdix_ctrl = VAR_0;
 FUNC_0(&VAR_6->lock);

 VAR_8 = VAR_3 << VAR_5;

 VAR_7 = FUNC_2(VAR_6, VAR_1,
         VAR_2, VAR_4,
         VAR_8);

 FUNC_1(&VAR_6->lock);

 return VAR_7;
}
