
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iTCO_wdt_private {int iTCO_version; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct iTCO_wdt_private *VAR_0,
         int VAR_1)
{
 return VAR_0->iTCO_version == 3 ? VAR_1 : (VAR_1 * 6) / 10;
}
