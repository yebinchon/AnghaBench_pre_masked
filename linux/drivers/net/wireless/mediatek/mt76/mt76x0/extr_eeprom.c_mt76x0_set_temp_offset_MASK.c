
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int temp_offset; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct mt76x02_dev {TYPE_2__ cal; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0) >> 8;
 if (FUNC_1(VAR_2))
  VAR_1->cal.rx.temp_offset = FUNC_2(VAR_2, 8);
 else
  VAR_1->cal.rx.temp_offset = -10;
}
