
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9320 {int display1; int initialised; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ili9320*) ;
 int FUNC_2 (struct ili9320*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct ili9320 *VAR_2)
{
 if (!VAR_2->initialised)
  FUNC_1(VAR_2);

 VAR_2->display1 |= (FUNC_0(3) | VAR_1);
 FUNC_2(VAR_2, VAR_0, VAR_2->display1);

 return 0;
}
