
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*,struct buffer_head**,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1,
         struct buffer_head **VAR_2,
         int VAR_3,
         int VAR_4,
         int VAR_5,
         int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6)
  VAR_7 = FUNC_6(VAR_1, ((void*)0), VAR_3);
 else
  VAR_7 = FUNC_8(VAR_1,
   VAR_4 ? ((void*)0) : VAR_2, VAR_3);
 if (VAR_7 < 0)
  goto out;

 if (VAR_6) {
  if (VAR_5)
   FUNC_4(&FUNC_0(VAR_1)->ip_alloc_sem);
  else
   FUNC_2(&FUNC_0(VAR_1)->ip_alloc_sem);
 } else {
  if (VAR_5)
   VAR_7 = FUNC_5(&FUNC_0(VAR_1)->ip_alloc_sem);
  else
   VAR_7 = FUNC_3(&FUNC_0(VAR_1)->ip_alloc_sem);

  if (!VAR_7) {
   VAR_7 = -VAR_0;
   goto out_unlock;
  }
 }

 return VAR_7;

out_unlock:
 FUNC_1(*VAR_2);
 FUNC_7(VAR_1, VAR_3);
out:
 return VAR_7;
}
