
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {int addr; int offset; } ;
typedef int sector_t ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static sector_t FUNC_0(struct iomap *VAR_1, loff_t VAR_2)
{
 return (VAR_1->addr + (VAR_2 & VAR_0) - VAR_1->offset) >> 9;
}
