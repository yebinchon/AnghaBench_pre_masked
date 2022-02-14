
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76_dev {TYPE_1__* bus; int state; } ;
struct TYPE_2__ {int (* rr ) (struct mt76_dev*,int const) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mt76_dev*,int const) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static inline bool FUNC_3(struct mt76_dev *VAR_1)
{
 const u32 VAR_2 = 0x1000;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 500; VAR_3++) {
  if (FUNC_1(VAR_0, &VAR_1->state))
   return 0;

  switch (VAR_1->bus->rr(VAR_1, VAR_2)) {
  case 0:
  case ~0:
   break;
  default:
   return 1;
  }
  FUNC_2(5000, 10000);
 }
 return 0;
}
