
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ i_reported_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,scalar_t__) ;

bool FUNC_3(struct inode *VAR_1, loff_t VAR_2)
{
 loff_t VAR_3 = FUNC_1(VAR_1)->i_reported_size;

 if (!FUNC_0(VAR_1))
  return 0;


 if (VAR_2 <= VAR_3)
  return 0;

 return FUNC_2(VAR_1, VAR_0,
        (VAR_2 - VAR_3));
}
