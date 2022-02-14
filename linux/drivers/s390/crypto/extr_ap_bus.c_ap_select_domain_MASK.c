
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ap_queue_status {scalar_t__ response_code; } ;
struct TYPE_2__ {int aqm; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct ap_queue_status FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_7, VAR_8, VAR_9;
 struct ap_queue_status VAR_10;
 int VAR_11, VAR_12;






 FUNC_6(&VAR_5);
 if (VAR_4 >= 0) {

  FUNC_7(&VAR_5);
  return;
 }
 VAR_9 = -1;
 VAR_8 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (!FUNC_4(VAR_11) ||
      !FUNC_8(VAR_11, VAR_6.aqm))
   continue;
  VAR_7 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (!FUNC_3(VAR_12))
    continue;
   VAR_10 = FUNC_5(FUNC_1(VAR_12, VAR_11),
            FUNC_2(),
            ((void*)0));
   if (VAR_10.response_code != VAR_2)
    continue;
   VAR_7++;
  }
  if (VAR_7 > VAR_8) {
   VAR_8 = VAR_7;
   VAR_9 = VAR_11;
  }
 }
 if (VAR_9 >= 0) {
  VAR_4 = VAR_9;
  FUNC_0(VAR_3, "new ap_domain_index=%d\n", VAR_4);
 }
 FUNC_7(&VAR_5);
}
