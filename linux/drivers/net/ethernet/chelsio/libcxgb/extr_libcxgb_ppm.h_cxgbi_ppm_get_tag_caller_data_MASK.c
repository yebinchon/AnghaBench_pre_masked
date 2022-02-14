
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cxgbi_ppm {TYPE_1__* ppod_data; } ;
struct TYPE_2__ {unsigned long caller_data; } ;


 size_t FUNC_0 (struct cxgbi_ppm*,size_t) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct cxgbi_ppm *VAR_0,
         u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_0->ppod_data[VAR_2].caller_data;
}
