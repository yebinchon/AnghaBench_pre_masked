
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int dummy; } ;


 int FUNC_0 (struct bq24190_dev_info*,int,int*) ;
 int FUNC_1 (struct bq24190_dev_info*,int,int) ;

__attribute__((used)) static int FUNC_2(struct bq24190_dev_info *VAR_0, u8 VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 &= ~VAR_2;
 VAR_5 |= ((VAR_4 << VAR_3) & VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
