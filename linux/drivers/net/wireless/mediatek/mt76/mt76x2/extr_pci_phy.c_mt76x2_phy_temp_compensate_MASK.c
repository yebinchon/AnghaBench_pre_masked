
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76x2_temp_comp {int high_slope; int low_slope; int lower_bound; int upper_bound; scalar_t__ temp_25_ref; } ;
struct TYPE_2__ {int temp; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct mt76x02_dev*,struct mt76x2_temp_comp*) ;

__attribute__((used)) static void
FUNC_5(struct mt76x02_dev *VAR_6)
{
 struct mt76x2_temp_comp VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_4(VAR_6, &VAR_7))
  return;

 VAR_8 = FUNC_2(VAR_6, VAR_0, VAR_1);
 VAR_8 -= VAR_7.temp_25_ref;
 VAR_8 = (VAR_8 * 1789) / 1000 + 25;
 VAR_6->cal.temp = VAR_8;

 if (VAR_8 > 25)
  VAR_9 = (VAR_8 - 25) / VAR_7.high_slope;
 else
  VAR_9 = (25 - VAR_8) / VAR_7.low_slope;

 VAR_9 = FUNC_1(VAR_9, VAR_7.upper_bound);
 VAR_9 = FUNC_0(VAR_9, VAR_7.lower_bound);

 FUNC_3(VAR_6, VAR_2, VAR_3,
         VAR_9 * 2);
 FUNC_3(VAR_6, VAR_4, VAR_5,
         VAR_9 * 2);
}
