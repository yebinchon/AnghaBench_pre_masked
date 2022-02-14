
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ asic_code; } ;


 int FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (struct rtsx_chip*,int) ;

__attribute__((used)) static inline int FUNC_2(struct rtsx_chip *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->asic_code)
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
