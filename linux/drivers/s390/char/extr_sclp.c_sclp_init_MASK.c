
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(void)
{
 unsigned long VAR_19;
 int VAR_20 = 0;

 FUNC_10(&VAR_10, VAR_19);

 if (VAR_5 != VAR_8)
  goto fail_unlock;
 VAR_5 = VAR_7;
 VAR_12 = (void *) FUNC_2(VAR_1 | VAR_2);
 VAR_4 = (void *) FUNC_2(VAR_1 | VAR_2);
 FUNC_0(!VAR_12 || !VAR_4);

 FUNC_1(&VAR_15);
 FUNC_1(&VAR_14);
 FUNC_5(&VAR_18.list, &VAR_14);
 FUNC_12(&VAR_17, ((void*)0), 0);
 FUNC_12(&VAR_11, VAR_16, 0);

 FUNC_11(&VAR_10, VAR_19);
 VAR_20 = FUNC_8();
 FUNC_10(&VAR_10, VAR_19);
 if (VAR_20)
  goto fail_init_state_uninitialized;

 VAR_20 = FUNC_7(&VAR_13);
 if (VAR_20)
  goto fail_init_state_uninitialized;

 VAR_20 = FUNC_6(VAR_0, VAR_9);
 if (VAR_20)
  goto fail_unregister_reboot_notifier;
 VAR_5 = VAR_6;
 FUNC_11(&VAR_10, VAR_19);


 FUNC_4(VAR_3);
 FUNC_9(1);
 return 0;

fail_unregister_reboot_notifier:
 FUNC_13(&VAR_13);
fail_init_state_uninitialized:
 VAR_5 = VAR_8;
 FUNC_3((unsigned long) VAR_12);
 FUNC_3((unsigned long) VAR_4);
fail_unlock:
 FUNC_11(&VAR_10, VAR_19);
 return VAR_20;
}
