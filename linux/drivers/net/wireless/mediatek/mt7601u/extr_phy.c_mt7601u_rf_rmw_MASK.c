
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (struct mt7601u_dev*,int,int) ;
 int FUNC_1 (struct mt7601u_dev*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct mt7601u_dev *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 |= VAR_5 & ~VAR_3;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4;
}
