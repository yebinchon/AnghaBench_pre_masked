
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regulator_dev {int dummy; } ;
struct max8660 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct max8660*,unsigned int,int,unsigned int) ;
 struct max8660* FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4,
     unsigned int VAR_5)
{
 struct max8660 *VAR_6 = FUNC_1(VAR_4);
 u8 VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = (FUNC_2(VAR_4) == VAR_2) ? VAR_0 : VAR_1;
 VAR_9 = FUNC_0(VAR_6, VAR_7, 0, VAR_5);
 if (VAR_9)
  return VAR_9;


 VAR_8 = (FUNC_2(VAR_4) == VAR_2) ? 0x03 : 0x30;
 return FUNC_0(VAR_6, VAR_3, 0xff, VAR_8);
}
