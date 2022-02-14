
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct mt76x02_dev *VAR_6, bool VAR_7, bool VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_0);

 if (VAR_8) {
  VAR_9 |= VAR_2;
  VAR_9 &= ~VAR_1;

  if (VAR_9 & VAR_3) {
   VAR_9 |= (VAR_4 |
    VAR_5);
   FUNC_1(VAR_6, VAR_0, VAR_9);
   FUNC_3(20);

   VAR_9 &= ~(VAR_4 |
     VAR_5);
  }
 }

 FUNC_1(VAR_6, VAR_0, VAR_9);
 FUNC_3(20);

 FUNC_2(VAR_6, VAR_9, VAR_7);
}
