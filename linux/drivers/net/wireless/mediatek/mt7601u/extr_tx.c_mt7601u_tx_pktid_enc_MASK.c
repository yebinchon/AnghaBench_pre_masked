
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int dummy; } ;



__attribute__((used)) static u8 FUNC_0(struct mt7601u_dev *VAR_0, u8 VAR_1, bool VAR_2)
{
 u8 VAR_3 = (VAR_1 + 1) + VAR_2 * 8;






 if (VAR_2 && VAR_1 == 7)
  return VAR_3 - 7;

 return VAR_3;
}
