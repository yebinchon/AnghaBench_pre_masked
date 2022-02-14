
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned long sysclk_rate; } ;



__attribute__((used)) static unsigned int FUNC_0(struct xlgmac_pdata *VAR_0,
     unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_0->sysclk_rate;






 VAR_3 = (VAR_1 * (VAR_2 / 1000000)) / 256;

 return VAR_3;
}
