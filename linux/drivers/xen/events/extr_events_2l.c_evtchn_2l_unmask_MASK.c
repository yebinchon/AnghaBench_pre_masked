
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {int evtchn_upcall_pending; int evtchn_pending_sel; } ;
struct shared_info {int * evtchn_mask; int * evtchn_pending; } ;
struct evtchn_unmask {unsigned int port; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct evtchn_unmask*) ;
 struct shared_info* VAR_2 ;
 struct vcpu_info* FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (unsigned int,int ) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_14(unsigned VAR_4)
{
 struct shared_info *VAR_5 = VAR_2;
 unsigned int VAR_6 = FUNC_5();
 int VAR_7 = 0, VAR_8 = 0;

 FUNC_1(!FUNC_6());

 if (FUNC_12((VAR_6 != FUNC_4(VAR_4))))
  VAR_7 = 1;
 else {
  FUNC_8(VAR_4, FUNC_0(&VAR_5->evtchn_mask[0]));
  VAR_8 = FUNC_11(VAR_4, FUNC_0(&VAR_5->evtchn_pending[0]));

  if (FUNC_12(VAR_8 && FUNC_13())) {
   FUNC_9(VAR_4, FUNC_0(&VAR_5->evtchn_mask[0]));
   VAR_7 = 1;
  }
 }




 if (VAR_7) {
  struct evtchn_unmask VAR_9 = { .port = VAR_4 };
  (void)FUNC_2(VAR_1, &VAR_9);
 } else {
  struct vcpu_info *VAR_10 = FUNC_3(VAR_3);






  if (VAR_8 &&
      !FUNC_10(VAR_4 / VAR_0,
        FUNC_0(&VAR_10->evtchn_pending_sel)))
   VAR_10->evtchn_upcall_pending = 1;
 }

 FUNC_7();
}
