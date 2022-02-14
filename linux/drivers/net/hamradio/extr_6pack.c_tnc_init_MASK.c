
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sixpack {int resync_t; TYPE_2__* tty; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (TYPE_2__*,unsigned char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_2 (struct sixpack*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct sixpack *VAR_3)
{
 unsigned char VAR_4 = 0xe8;

 FUNC_2(VAR_3, VAR_1);

 VAR_3->tty->ops->write(VAR_3->tty, &VAR_4, 1);

 FUNC_0(&VAR_3->resync_t, VAR_2 + VAR_0);

 return 0;
}
