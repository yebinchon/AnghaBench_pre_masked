
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cxgbi_ppod_data {int npods; } ;
struct cxgbi_ppm {scalar_t__ ppmax; struct cxgbi_ppod_data* ppod_data; } ;


 int FUNC_0 (struct cxgbi_ppm*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,...) ;

void FUNC_3(struct cxgbi_ppm *VAR_0, u32 VAR_1)
{
 struct cxgbi_ppod_data *VAR_2;

 if (VAR_1 >= VAR_0->ppmax) {
  FUNC_2("ippm: idx too big %u > %u.\n", VAR_1, VAR_0->ppmax);
  return;
 }

 VAR_2 = VAR_0->ppod_data + VAR_1;
 if (!VAR_2->npods) {
  FUNC_2("ippm: idx %u, npods 0.\n", VAR_1);
  return;
 }

 FUNC_1("release idx %u, npods %u.\n", VAR_1, VAR_2->npods);
 FUNC_0(VAR_0, VAR_1, VAR_2->npods);
}
