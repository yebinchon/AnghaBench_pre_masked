
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct key {int dummy; } ;
typedef scalar_t__ key_serial_t ;


 int VAR_0 ;
 void const* FUNC_0 (struct key*) ;
 struct key* FUNC_1 (struct nvdimm*,scalar_t__,int) ;
 void const* VAR_1 ;

__attribute__((used)) static const void *FUNC_2(struct nvdimm *VAR_2,
  key_serial_t VAR_3, int VAR_4, struct key **VAR_5)
{
 *VAR_5 = ((void*)0);
 if (VAR_3 == 0) {
  if (VAR_4 == VAR_0)
   return VAR_1;
  else
   return ((void*)0);
 }

 *VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!*VAR_5)
  return ((void*)0);

 return FUNC_0(*VAR_5);
}
