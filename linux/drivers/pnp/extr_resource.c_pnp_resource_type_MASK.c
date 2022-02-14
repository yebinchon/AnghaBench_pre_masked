
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

unsigned long FUNC_0(struct resource *VAR_5)
{
 return VAR_5->flags & (VAR_2 | VAR_4 |
        VAR_3 | VAR_1 |
        VAR_0);
}
