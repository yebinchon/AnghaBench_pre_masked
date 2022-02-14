
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qtnf_wmac {int macid; } ;
struct qlink_event_scan_complete {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct qtnf_wmac*,int) ;

__attribute__((used)) static int
FUNC_3(struct qtnf_wmac *VAR_2,
    const struct qlink_event_scan_complete *VAR_3,
    u16 VAR_4)
{
 if (VAR_4 < sizeof(*VAR_3)) {
  FUNC_1("MAC%u: payload is too short\n", VAR_2->macid);
  return -VAR_0;
 }

 FUNC_2(VAR_2, FUNC_0(VAR_3->flags) & VAR_1);

 return 0;
}
