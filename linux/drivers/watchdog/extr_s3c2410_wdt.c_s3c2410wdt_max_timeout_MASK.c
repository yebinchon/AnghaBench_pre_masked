
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct clk*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct clk *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_3);

 return VAR_0 / (VAR_4 / (VAR_2 + 1)
           / VAR_1);
}
