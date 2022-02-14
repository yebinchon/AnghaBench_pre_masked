
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct mt76x02_dev *VAR_6, u32 VAR_7, bool VAR_8)
{
 u32 VAR_9 = VAR_2 | VAR_1;







 if (VAR_8)
  VAR_7 |= (VAR_5 |
   VAR_4);
 else
  VAR_7 &= ~(VAR_5);

 FUNC_2(VAR_6, VAR_3, VAR_7);
 FUNC_3(20);





 if (VAR_8 && !FUNC_1(VAR_6, VAR_0, VAR_9, VAR_9, 2000))
  FUNC_0(VAR_6->mt76.dev, "PLL and XTAL check failed\n");
}
