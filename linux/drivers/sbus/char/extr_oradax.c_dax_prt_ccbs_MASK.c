
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ longccb; } ;
struct dax_ccb {TYPE_1__ hdr; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dax_ccb *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 u64 *VAR_4;

 FUNC_0("ccb buffer:");
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_4 = (u64 *)&VAR_0[VAR_2];
  FUNC_0(" %sccb[%d]", VAR_0[VAR_2].hdr.longccb ? "long " : "", VAR_2);
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   FUNC_0("\tccb[%d].dwords[%d]=0x%llx",
    VAR_2, VAR_3, *(VAR_4 + VAR_3));
 }
}
