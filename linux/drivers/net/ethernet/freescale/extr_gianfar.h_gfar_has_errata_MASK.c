
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_private {int errata; } ;
typedef enum gfar_errata { ____Placeholder_gfar_errata } gfar_errata ;



__attribute__((used)) static inline int FUNC_0(struct gfar_private *VAR_0,
      enum gfar_errata VAR_1)
{
 return VAR_0->errata & VAR_1;
}
