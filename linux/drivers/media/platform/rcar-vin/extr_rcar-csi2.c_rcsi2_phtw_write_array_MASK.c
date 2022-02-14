
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2 {int dummy; } ;
struct phtw_value {scalar_t__ code; scalar_t__ data; } ;


 int FUNC_0 (struct rcar_csi2*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rcar_csi2 *VAR_0,
      const struct phtw_value *VAR_1)
{
 const struct phtw_value *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1; VAR_2->data || VAR_2->code; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_2->data, VAR_2->code);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
