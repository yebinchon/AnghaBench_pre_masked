
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi148_driver {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct tsi148_driver *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + VAR_0);

 if (VAR_3 & VAR_1)
  return 0;
 else
  return 1;
}
