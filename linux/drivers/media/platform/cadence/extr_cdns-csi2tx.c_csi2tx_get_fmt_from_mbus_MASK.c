
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct csi2tx_fmt {scalar_t__ mbus; } ;


 unsigned int FUNC_0 (struct csi2tx_fmt const*) ;
 struct csi2tx_fmt const* VAR_0 ;

__attribute__((used)) static const struct csi2tx_fmt *FUNC_1(u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].mbus == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
