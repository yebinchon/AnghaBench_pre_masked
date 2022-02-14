
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {scalar_t__ thread_enabled; int bgt_name; int wl_lock; scalar_t__ ro_mode; int works; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ubi_device*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (struct ubi_device*) ;
 int FUNC_13 (struct ubi_device*,char*,int ,int) ;
 int FUNC_14 (struct ubi_device*,char*,int ,int ) ;
 int FUNC_15 (struct ubi_device*) ;

int FUNC_16(void *VAR_3)
{
 int VAR_4 = 0;
 struct ubi_device *VAR_5 = VAR_3;

 FUNC_14(VAR_5, "background thread \"%s\" started, PID %d",
  VAR_5->bgt_name, FUNC_10(VAR_2));

 FUNC_7();
 for (;;) {
  int VAR_6;

  if (FUNC_3())
   break;

  if (FUNC_11())
   continue;

  FUNC_8(&VAR_5->wl_lock);
  if (FUNC_4(&VAR_5->works) || VAR_5->ro_mode ||
      !VAR_5->thread_enabled || FUNC_12(VAR_5)) {
   FUNC_6(VAR_0);
   FUNC_9(&VAR_5->wl_lock);
   FUNC_5();
   continue;
  }
  FUNC_9(&VAR_5->wl_lock);

  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6) {
   FUNC_13(VAR_5, "%s: work failed with error code %d",
    VAR_5->bgt_name, VAR_6);
   if (VAR_4++ > VAR_1) {




    FUNC_14(VAR_5, "%s: %d consecutive failures",
     VAR_5->bgt_name, VAR_1);
    FUNC_15(VAR_5);
    VAR_5->thread_enabled = 0;
    continue;
   }
  } else
   VAR_4 = 0;

  FUNC_0();
 }

 FUNC_1("background thread \"%s\" is killed", VAR_5->bgt_name);
 VAR_5->thread_enabled = 0;
 return 0;
}
