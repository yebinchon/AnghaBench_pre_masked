
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int scan_event; scalar_t__ user_requested_scan; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ipw_priv *VAR_1)
{

 if (!VAR_1->user_requested_scan) {
  FUNC_3(&VAR_1->scan_event,
          FUNC_2(FUNC_1(4000)));
 } else {
  VAR_1->user_requested_scan = 0;
  FUNC_0(VAR_0, &VAR_1->scan_event, 0);
 }
}
