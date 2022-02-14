
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {unsigned int lpss_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct driver_data *VAR_0,
      unsigned VAR_1, u32 VAR_2)
{
 FUNC_0(!VAR_0->lpss_base);
 FUNC_1(VAR_2, VAR_0->lpss_base + VAR_1);
}
