
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct gsm_mux {TYPE_2__* tty; } ;
struct TYPE_5__ {TYPE_1__* ops; int flags; } ;
struct TYPE_4__ {int (* write ) (TYPE_2__*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct gsm_mux *VAR_4, u8 *VAR_5, int VAR_6)
{
 if (FUNC_3(VAR_4->tty) < VAR_6) {
  FUNC_1(VAR_2, &VAR_4->tty->flags);
  return -VAR_1;
 }
 if (VAR_3 & 4)
  FUNC_0("gsmld_output: ", VAR_0,
         VAR_5, VAR_6);
 VAR_4->tty->ops->write(VAR_4->tty, VAR_5, VAR_6);
 return VAR_6;
}
