
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pktsts; int bcnt; int chnum; } ;
union cvmx_usbcx_grxstsph {TYPE_1__ s; void* u32; } ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct octeon_hcd {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int * FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 void* FUNC_5 (struct octeon_hcd*,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct octeon_hcd *VAR_1)
{
 union cvmx_usbcx_grxstsph VAR_2;
 int VAR_3;
 int VAR_4;
 u64 VAR_5;
 u32 *VAR_6;

 VAR_2.u32 = FUNC_5(VAR_1,
         FUNC_0(VAR_1->index));

 if (VAR_2.s.pktsts != 2)
  return;

 if (!VAR_2.s.bcnt)
  return;

 VAR_3 = VAR_2.s.chnum;
 VAR_4 = VAR_2.s.bcnt;
 if (!VAR_4)
  return;


 VAR_5 = FUNC_4(FUNC_1(VAR_1->index) +
         VAR_3 * 8);

 VAR_6 = FUNC_3(VAR_5);
 FUNC_6(FUNC_1(VAR_1->index) + VAR_3 * 8,
       VAR_5 + VAR_4);


 while (VAR_4 > 0) {
  *VAR_6++ = FUNC_5(VAR_1,
     FUNC_2(VAR_3, VAR_1->index));
  VAR_4 -= 4;
 }
 VAR_0;
}
