
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ci_hw_ep {scalar_t__ dir; int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(struct ci_hw_ep *VAR_2)
{
 return ((VAR_2->dir == VAR_0) ? VAR_1 : 0) | VAR_2->num;
}
