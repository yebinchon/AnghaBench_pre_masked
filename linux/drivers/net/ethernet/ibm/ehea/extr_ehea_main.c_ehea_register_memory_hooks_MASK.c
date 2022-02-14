
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_4 = 0;

 if (FUNC_1(&VAR_2) > 1)
  return 0;

 VAR_4 = FUNC_3();
 if (VAR_4) {
  FUNC_4("ehea_create_busmap failed\n");
  goto out;
 }

 VAR_4 = FUNC_6(&VAR_3);
 if (VAR_4) {
  FUNC_4("register_reboot_notifier failed\n");
  goto out;
 }

 VAR_4 = FUNC_5(&VAR_1);
 if (VAR_4) {
  FUNC_4("register_memory_notifier failed\n");
  goto out2;
 }

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4) {
  FUNC_4("crash_shutdown_register failed\n");
  goto out3;
 }

 return 0;

out3:
 FUNC_7(&VAR_1);
out2:
 FUNC_8(&VAR_3);
out:
 FUNC_0(&VAR_2);
 return VAR_4;
}
