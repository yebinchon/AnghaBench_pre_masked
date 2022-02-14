
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {scalar_t__ proc_handler; int mode; int maxlen; int data; scalar_t__ child; scalar_t__ procname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char const*,struct ctl_table*) ;
 int FUNC_1 (char const*,struct ctl_table*,char*,...) ;

__attribute__((used)) static int FUNC_2(const char *VAR_12, struct ctl_table *VAR_13)
{
 int VAR_14 = 0;
 for (; VAR_13->procname; VAR_13++) {
  if (VAR_13->child)
   VAR_14 |= FUNC_1(VAR_12, VAR_13, "Not a file");

  if ((VAR_13->proc_handler == VAR_7) ||
      (VAR_13->proc_handler == VAR_2) ||
      (VAR_13->proc_handler == VAR_8) ||
      (VAR_13->proc_handler == VAR_9) ||
      (VAR_13->proc_handler == VAR_4) ||
      (VAR_13->proc_handler == VAR_3) ||
      (VAR_13->proc_handler == VAR_6) ||
      (VAR_13->proc_handler == VAR_5) ||
      (VAR_13->proc_handler == VAR_10) ||
      (VAR_13->proc_handler == VAR_11)) {
   if (!VAR_13->data)
    VAR_14 |= FUNC_1(VAR_12, VAR_13, "No data");
   if (!VAR_13->maxlen)
    VAR_14 |= FUNC_1(VAR_12, VAR_13, "No maxlen");
   else
    VAR_14 |= FUNC_0(VAR_12, VAR_13);
  }
  if (!VAR_13->proc_handler)
   VAR_14 |= FUNC_1(VAR_12, VAR_13, "No proc_handler");

  if ((VAR_13->mode & (VAR_0|VAR_1)) != VAR_13->mode)
   VAR_14 |= FUNC_1(VAR_12, VAR_13, "bogus .mode 0%o",
    VAR_13->mode);
 }
 return VAR_14;
}
