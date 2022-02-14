
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vimc_deb_pix_map {scalar_t__ code; } ;


 unsigned int FUNC_0 (struct vimc_deb_pix_map const*) ;
 struct vimc_deb_pix_map const* VAR_0 ;

__attribute__((used)) static const struct vimc_deb_pix_map *FUNC_1(u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].code == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
