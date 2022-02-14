
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0,
            struct buffer_head **VAR_1,
            int VAR_2,
            int VAR_3)
{
 if (VAR_3)
  FUNC_4(&FUNC_0(VAR_0)->ip_alloc_sem);
 else
  FUNC_3(&FUNC_0(VAR_0)->ip_alloc_sem);

 FUNC_1(*VAR_1);
 *VAR_1 = ((void*)0);

 if (VAR_2 >= 0)
  FUNC_2(VAR_0, VAR_2);
}
