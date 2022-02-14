
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_tt {int* bandwidth; int ps_list; } ;
struct TYPE_2__ {int usecs; int c_usecs; int tt_usecs; scalar_t__ phase; int bw_phase; unsigned int phase_uf; unsigned int cs_mask; scalar_t__ bw_period; int ps_list; int udev; scalar_t__ bw_uperiod; } ;
struct ehci_qh {TYPE_1__ ps; } ;
struct ehci_hcd {int* bandwidth; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int,char*,TYPE_1__*) ;
 struct ehci_tt* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ehci_hcd *VAR_3,
  struct ehci_qh *VAR_4, int VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_4->ps.usecs;
 int VAR_11 = VAR_4->ps.c_usecs;
 int VAR_12 = VAR_4->ps.tt_usecs;
 struct ehci_tt *VAR_13;

 if (VAR_4->ps.phase == VAR_2)
  return;
 VAR_6 = VAR_4->ps.bw_phase << 3;

 FUNC_0(VAR_3, VAR_5, "intr", &VAR_4->ps);

 if (VAR_5 < 0) {
  VAR_10 = -VAR_10;
  VAR_11 = -VAR_11;
  VAR_12 = -VAR_12;
 }


 for (VAR_7 = VAR_6 + VAR_4->ps.phase_uf; VAR_7 < VAR_1;
   VAR_7 += VAR_4->ps.bw_uperiod)
  VAR_3->bandwidth[VAR_7] += VAR_10;


 if (VAR_4->ps.c_usecs) {

  for (VAR_7 = VAR_6; VAR_7 < VAR_1;
    VAR_7 += VAR_4->ps.bw_uperiod) {
   for ((VAR_8 = 2, VAR_9 = 1 << (VAR_8+8)); VAR_8 < 8; (++VAR_8, VAR_9 <<= 1)) {
    if (VAR_4->ps.cs_mask & VAR_9)
     VAR_3->bandwidth[VAR_7+VAR_8] += VAR_11;
   }
  }
 }


 if (VAR_12) {
  VAR_13 = FUNC_1(VAR_4->ps.udev);
  if (VAR_5 > 0)
   FUNC_2(&VAR_4->ps.ps_list, &VAR_13->ps_list);
  else
   FUNC_3(&VAR_4->ps.ps_list);

  for (VAR_7 = VAR_6 >> 3; VAR_7 < VAR_0;
    VAR_7 += VAR_4->ps.bw_period)
   VAR_13->bandwidth[VAR_7] += VAR_12;
 }
}
