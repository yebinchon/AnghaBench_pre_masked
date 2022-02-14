
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_comm {int vc_mutex; } ;
struct upc_req {int uc_flags; int uc_sleep; int uc_chain; } ;
typedef int sigset_t ;


 scalar_t__ FUNC_0 (struct upc_req*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_14(struct venus_comm *VAR_10,
           struct upc_req *VAR_11)
{
 FUNC_1(VAR_9, VAR_7);
 unsigned long VAR_12 = VAR_8 + VAR_6 * VAR_2;
 sigset_t VAR_13;
 int VAR_14;

 FUNC_3(&VAR_13);
 VAR_14 = 1;

 FUNC_2(&VAR_11->uc_sleep, &VAR_9);
 for (;;) {
  if (FUNC_0(VAR_11))
   FUNC_11(VAR_3);
  else
   FUNC_11(VAR_5);


  if (VAR_11->uc_flags & (VAR_1 | VAR_0))
   break;

  if (VAR_14 && FUNC_13(VAR_8, VAR_12) &&
      FUNC_0(VAR_11))
  {
   FUNC_4(&VAR_13);
   VAR_14 = 0;
  }

  if (FUNC_12(VAR_7)) {
   FUNC_5(&VAR_11->uc_chain);
   break;
  }

  FUNC_7(&VAR_10->vc_mutex);
  if (VAR_14)
   FUNC_10(VAR_2);
  else
   FUNC_9();
  FUNC_6(&VAR_10->vc_mutex);
 }
 if (VAR_14)
  FUNC_4(&VAR_13);

 FUNC_8(&VAR_11->uc_sleep, &VAR_9);
 FUNC_11(VAR_4);
}
