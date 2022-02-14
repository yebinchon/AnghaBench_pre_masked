
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct inode {TYPE_1__* i_op; } ;
struct TYPE_2__ {int (* update_time ) (struct inode*,struct timespec64*,int) ;} ;


 int FUNC_0 (struct inode*,struct timespec64*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct timespec64 *VAR_1, int VAR_2)
{
 int (*VAR_3)(struct inode *, struct timespec64 *, int);

 VAR_3 = VAR_0->i_op->update_time ? VAR_0->i_op->update_time :
  FUNC_0;

 return VAR_3(VAR_0, VAR_1, VAR_2);
}
