
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_ail {scalar_t__ ail_target; scalar_t__ ail_target_prev; int ail_lock; int ail_buf_list; int ail_mount; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct xfs_ail*) ;
 int FUNC_15 (int *) ;
 long FUNC_16 (struct xfs_ail*) ;

__attribute__((used)) static int
FUNC_17(
 void *VAR_5)
{
 struct xfs_ail *VAR_6 = VAR_5;
 long VAR_7 = 0;

 VAR_4->flags |= VAR_0;
 FUNC_9();

 while (1) {
  if (VAR_7 && VAR_7 <= 20)
   FUNC_8(VAR_2);
  else
   FUNC_8(VAR_1);
  if (FUNC_5()) {
   FUNC_2(VAR_3);
   FUNC_0(FUNC_6(&VAR_6->ail_buf_list) ||
          FUNC_1(VAR_6->ail_mount));
   FUNC_15(&VAR_6->ail_buf_list);
   break;
  }

  FUNC_11(&VAR_6->ail_lock);
  FUNC_10();
  if (!FUNC_14(VAR_6) &&
      VAR_6->ail_target == VAR_6->ail_target_prev) {
   FUNC_12(&VAR_6->ail_lock);
   FUNC_3();
   VAR_7 = 0;
   continue;
  }
  FUNC_12(&VAR_6->ail_lock);

  if (VAR_7)
   FUNC_4(FUNC_7(VAR_7));

  FUNC_2(VAR_3);

  FUNC_13();

  VAR_7 = FUNC_16(VAR_6);
 }

 return 0;
}
