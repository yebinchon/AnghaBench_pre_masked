
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pstore_info {int flags; scalar_t__ name; int buf_lock; int read_mutex; scalar_t__ write_user; int write; int read; struct module* owner; } ;
struct module {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct module*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,...) ;
 struct pstore_info* VAR_9 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_1__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (struct module*) ;

int FUNC_18(struct pstore_info *VAR_14)
{
 struct module *VAR_15 = VAR_14->owner;

 if (VAR_7 && FUNC_16(VAR_7, VAR_14->name)) {
  FUNC_6("ignoring unexpected backend '%s'\n", VAR_14->name);
  return -VAR_2;
 }


 if (!VAR_14->flags) {
  FUNC_6("backend '%s' must support at least one frontend\n",
   VAR_14->name);
  return -VAR_1;
 }


 if (!VAR_14->read || !VAR_14->write) {
  FUNC_6("backend '%s' must implement read() and write()\n",
   VAR_14->name);
  return -VAR_1;
 }

 FUNC_14(&VAR_10);
 if (VAR_9) {
  FUNC_6("backend '%s' already loaded: ignoring '%s'\n",
   VAR_9->name, VAR_14->name);
  FUNC_15(&VAR_10);
  return -VAR_0;
 }

 if (!VAR_14->write_user)
  VAR_14->write_user = VAR_13;
 VAR_9 = VAR_14;
 FUNC_4(&VAR_9->read_mutex);
 FUNC_13(&VAR_9->buf_lock, 1);
 FUNC_15(&VAR_10);

 if (VAR_15 && !FUNC_17(VAR_15)) {
  VAR_9 = ((void*)0);
  return -VAR_1;
 }

 if (VAR_14->flags & VAR_4)
  FUNC_1();

 if (FUNC_8())
  FUNC_7(0);

 if (VAR_14->flags & VAR_4)
  FUNC_11();
 if (VAR_14->flags & VAR_3)
  FUNC_9();
 if (VAR_14->flags & VAR_5)
  FUNC_10();
 if (VAR_14->flags & VAR_6)
  FUNC_12();


 if (VAR_12 >= 0) {
  VAR_11.expires = VAR_8 +
   FUNC_3(VAR_12);
  FUNC_0(&VAR_11);
 }





 VAR_7 = VAR_14->name;

 FUNC_5("Registered %s as persistent store backend\n", VAR_14->name);

 FUNC_2(VAR_15);

 return 0;
}
