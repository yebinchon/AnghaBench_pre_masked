
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_disksize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (struct inode*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;

int FUNC_10(struct inode *VAR_1, loff_t VAR_2,
          loff_t VAR_3)
{
 handle_t *VAR_4;
 loff_t VAR_5 = FUNC_8(VAR_1);

 FUNC_3(!FUNC_9(VAR_1));
 if (VAR_2 > VAR_5 || VAR_2 + VAR_3 < VAR_5)
  return 0;

 if (FUNC_0(VAR_1)->i_disksize >= VAR_5)
  return 0;

 VAR_4 = FUNC_4(VAR_1, VAR_0, 1);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);
 FUNC_7(VAR_1, VAR_5);
 FUNC_6(VAR_4, VAR_1);
 FUNC_5(VAR_4);

 return 0;
}
