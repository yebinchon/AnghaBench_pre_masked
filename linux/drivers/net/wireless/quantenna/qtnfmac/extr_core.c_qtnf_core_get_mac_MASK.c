
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qtnf_wmac {int dummy; } ;
struct qtnf_bus {struct qtnf_wmac** mac; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (int) ;

struct qtnf_wmac *FUNC_2(const struct qtnf_bus *VAR_1, u8 VAR_2)
{
 struct qtnf_wmac *VAR_3 = ((void*)0);

 if (FUNC_1(VAR_2 >= VAR_0)) {
  FUNC_0("invalid MAC index %u\n", VAR_2);
  return ((void*)0);
 }

 VAR_3 = VAR_1->mac[VAR_2];

 if (FUNC_1(!VAR_3)) {
  FUNC_0("MAC%u: not initialized\n", VAR_2);
  return ((void*)0);
 }

 return VAR_3;
}
