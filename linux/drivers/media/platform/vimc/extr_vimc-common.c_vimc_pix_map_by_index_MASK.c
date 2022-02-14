
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_pix_map {int dummy; } ;


 unsigned int FUNC_0 (struct vimc_pix_map const*) ;
 struct vimc_pix_map const* VAR_0 ;

const struct vimc_pix_map *FUNC_1(unsigned int VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0))
  return ((void*)0);

 return &VAR_0[VAR_1];
}
