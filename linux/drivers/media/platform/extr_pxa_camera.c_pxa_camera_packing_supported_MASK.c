
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_mbus_pixelfmt {scalar_t__ packing; int bits_per_sample; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(const struct pxa_mbus_pixelfmt *VAR_3)
{
 return VAR_3->packing == VAR_2 ||
  (VAR_3->bits_per_sample == 8 &&
   VAR_3->packing == VAR_0) ||
  (VAR_3->bits_per_sample > 8 &&
   VAR_3->packing == VAR_1);
}
