
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int dummy; } ;
struct icm_pkg_header {int dummy; } ;
struct icm_icl_event_rtd3_veto {scalar_t__ veto_reason; } ;


 int FUNC_0 (struct tb*) ;
 int FUNC_1 (struct tb*) ;
 int FUNC_2 (struct tb*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tb *VAR_0, const struct icm_pkg_header *VAR_1)
{
 const struct icm_icl_event_rtd3_veto *VAR_2 =
  (const struct icm_icl_event_rtd3_veto *)VAR_1;

 FUNC_2(VAR_0, "ICM rtd3 veto=0x%08x\n", VAR_2->veto_reason);

 if (VAR_2->veto_reason)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
