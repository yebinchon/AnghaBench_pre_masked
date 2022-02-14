
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int) ;

__attribute__((used)) static u8 FUNC_1(struct mt76x02_dev *VAR_2,
        int VAR_3, u8 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = (VAR_3 == 1) ? VAR_1 : VAR_0;
 VAR_5 = FUNC_0(VAR_2, VAR_6);
 return (VAR_5 & (3 << (VAR_4 * 2))) >> (VAR_4 * 2);
}
