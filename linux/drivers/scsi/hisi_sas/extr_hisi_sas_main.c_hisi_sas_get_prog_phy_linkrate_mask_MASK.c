
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;


 scalar_t__ VAR_0 ;

u8 FUNC_0(enum sas_linkrate VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3;

 VAR_1 -= VAR_0;
 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
  VAR_2 |= 1 << (VAR_3 * 2);
 return VAR_2;
}
