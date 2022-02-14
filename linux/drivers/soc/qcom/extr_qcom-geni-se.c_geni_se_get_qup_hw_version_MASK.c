
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct geni_wrapper {scalar_t__ base; } ;
struct geni_se {struct geni_wrapper* wrapper; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

u32 FUNC_1(struct geni_se *VAR_1)
{
 struct geni_wrapper *VAR_2 = VAR_1->wrapper;

 return FUNC_0(VAR_2->base + VAR_0);
}
