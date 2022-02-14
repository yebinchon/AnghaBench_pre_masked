
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2_format {unsigned int code; } ;


 unsigned int FUNC_0 (struct rcar_csi2_format const*) ;
 struct rcar_csi2_format const* VAR_0 ;

__attribute__((used)) static const struct rcar_csi2_format *FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].code == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
