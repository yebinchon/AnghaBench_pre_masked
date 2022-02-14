
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;


 int FUNC_0 (struct spinand_device*,int *) ;
 int FUNC_1 (struct spinand_device*,int ) ;

int FUNC_2(struct spinand_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_2;

 return FUNC_1(VAR_0, VAR_4);
}
