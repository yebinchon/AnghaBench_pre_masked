
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (struct mt76_dev*,int) ;
 int FUNC_1 (struct mt76_dev*,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct mt76_dev *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 VAR_3 |= FUNC_0(VAR_0, VAR_1) & ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_3);
 return VAR_3;
}
