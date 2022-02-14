
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct patch {size_t begin; scalar_t__ (* patch_func ) (struct ahd_softc*) ;size_t skip_instr; int skip_patch; } ;
struct ahd_softc {int dummy; } ;


 size_t FUNC_0 (struct patch*) ;
 struct patch* VAR_0 ;
 scalar_t__ FUNC_1 (struct ahd_softc*) ;

__attribute__((used)) static int
FUNC_2(struct ahd_softc *VAR_1, const struct patch **VAR_2,
  u_int VAR_3, u_int *VAR_4)
{
 const struct patch *VAR_5;
 const struct patch *VAR_6;
 u_int VAR_7;

 VAR_7 = FUNC_0(VAR_0);
 VAR_6 = &VAR_0[VAR_7];
 VAR_5 = *VAR_2;

 while (VAR_5 < VAR_6 && VAR_3 == VAR_5->begin) {

  if (VAR_5->patch_func(VAR_1) == 0) {


   *VAR_4 = VAR_3 + VAR_5->skip_instr;
   VAR_5 += VAR_5->skip_patch;
  } else {




   VAR_5++;
  }
 }

 *VAR_2 = VAR_5;
 if (VAR_3 < *VAR_4)

  return (0);

 return (1);
}
