
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int (* rr ) (struct mt76_dev*,int) ;} ;


 int FUNC_0 (struct mt76_dev*,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct mt76_dev *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
   int VAR_4)
{
 u32 VAR_5;

 VAR_4 /= 10;
 do {
  VAR_5 = VAR_0->bus->rr(VAR_0, VAR_1) & VAR_2;
  if (VAR_5 == VAR_3)
   return 1;

  FUNC_1(10);
 } while (VAR_4-- > 0);

 return 0;
}
