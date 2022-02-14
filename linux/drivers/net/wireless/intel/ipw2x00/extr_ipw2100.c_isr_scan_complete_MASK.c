
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int scan_event; scalar_t__ user_requested_scan; int status; TYPE_1__* ieee; } ;
struct TYPE_2__ {int scans; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct ipw2100_priv *VAR_2, u32 VAR_3)
{
 FUNC_0("scan complete\n");

 VAR_2->ieee->scans++;
 VAR_2->status &= ~VAR_0;


 if (!VAR_2->user_requested_scan) {
  FUNC_4(&VAR_2->scan_event,
          FUNC_3(FUNC_2(4000)));
 } else {
  VAR_2->user_requested_scan = 0;
  FUNC_1(VAR_1, &VAR_2->scan_event, 0);
 }
}
