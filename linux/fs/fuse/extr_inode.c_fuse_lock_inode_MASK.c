
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int parallel_dirops; } ;
struct TYPE_3__ {int mutex; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct inode *VAR_0)
{
 bool VAR_1 = 0;

 if (!FUNC_0(VAR_0)->parallel_dirops) {
  FUNC_2(&FUNC_1(VAR_0)->mutex);
  VAR_1 = 1;
 }

 return VAR_1;
}
