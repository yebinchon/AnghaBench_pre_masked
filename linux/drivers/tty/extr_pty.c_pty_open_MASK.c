
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_2__* link; TYPE_1__* driver; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int count; int flags; } ;
struct TYPE_3__ {scalar_t__ subtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_7, struct file *VAR_8)
{
 if (!VAR_7 || !VAR_7->link)
  return -VAR_1;

 if (FUNC_2(VAR_4, &VAR_7->flags))
  goto out;
 if (FUNC_2(VAR_5, &VAR_7->link->flags))
  goto out;
 if (VAR_7->driver->subtype == VAR_2 && VAR_7->link->count != 1)
  goto out;

 FUNC_0(VAR_3, &VAR_7->flags);
 FUNC_0(VAR_4, &VAR_7->link->flags);
 FUNC_1(VAR_6, &VAR_7->flags);
 return 0;

out:
 FUNC_1(VAR_3, &VAR_7->flags);
 return -VAR_0;
}
