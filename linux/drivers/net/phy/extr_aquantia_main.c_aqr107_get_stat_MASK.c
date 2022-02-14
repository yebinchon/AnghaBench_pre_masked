
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {int dummy; } ;
struct aqr107_hw_stat {int size; scalar_t__ reg; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aqr107_hw_stat* VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct phy_device*,int ,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct phy_device *VAR_3, int VAR_4)
{
 const struct aqr107_hw_stat *VAR_5 = VAR_2 + VAR_4;
 int VAR_6 = FUNC_1(VAR_5->size, 16);
 int VAR_7 = VAR_5->size - VAR_6;
 u64 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_0, VAR_5->reg);
 if (VAR_9 < 0)
  return VAR_1;

 VAR_8 = VAR_9 & FUNC_0(VAR_6 - 1, 0);
 if (VAR_7) {
  VAR_9 = FUNC_2(VAR_3, VAR_0, VAR_5->reg + 1);
  if (VAR_9 < 0)
   return VAR_1;

  VAR_8 += (VAR_9 & FUNC_0(VAR_7 - 1, 0)) << 16;
 }

 return VAR_8;
}
