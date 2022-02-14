
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_sdio_quirk {unsigned int quirks; scalar_t__ vendor; scalar_t__ device; } ;


 struct b43_sdio_quirk* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(u16 VAR_1, u16 VAR_2)
{
 const struct b43_sdio_quirk *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->quirks; VAR_3++) {
  if (VAR_1 == VAR_3->vendor && VAR_2 == VAR_3->device)
   return VAR_3->quirks;
 }

 return 0;
}
