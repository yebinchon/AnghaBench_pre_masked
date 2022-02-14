
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {unsigned int lpss_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static u32 FUNC_2(struct driver_data *VAR_0, unsigned VAR_1)
{
 FUNC_0(!VAR_0->lpss_base);
 return FUNC_1(VAR_0->lpss_base + VAR_1);
}
