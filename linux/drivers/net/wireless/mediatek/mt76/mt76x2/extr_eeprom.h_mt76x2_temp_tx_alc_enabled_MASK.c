
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct mt76x02_dev *VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!(VAR_4 & FUNC_0(15)))
  return 0;

 return FUNC_1(VAR_3, VAR_0) &
        VAR_1;
}
