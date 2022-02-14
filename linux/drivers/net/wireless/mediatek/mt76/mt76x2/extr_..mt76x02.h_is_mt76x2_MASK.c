
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int mt76; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct mt76x02_dev *VAR_0)
{
 return FUNC_0(&VAR_0->mt76) == 0x7612 ||
        FUNC_0(&VAR_0->mt76) == 0x7662 ||
        FUNC_0(&VAR_0->mt76) == 0x7602;
}
