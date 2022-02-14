
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_dev {int reg_lock; } ;
struct rtsx_chip {struct rtsx_dev* rtsx; } ;


 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct rtsx_chip *VAR_0)
{
 struct rtsx_dev *VAR_1 = VAR_0->rtsx;

 FUNC_1(&VAR_1->reg_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->reg_lock);
}
