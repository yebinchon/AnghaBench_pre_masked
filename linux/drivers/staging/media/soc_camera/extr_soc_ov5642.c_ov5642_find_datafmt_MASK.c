
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov5642_datafmt {scalar_t__ code; } ;


 int FUNC_0 (struct ov5642_datafmt const*) ;
 struct ov5642_datafmt const* VAR_0 ;

__attribute__((used)) static const struct ov5642_datafmt
   *FUNC_1(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].code == VAR_1)
   return VAR_0 + VAR_2;

 return ((void*)0);
}
