
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;

bool FUNC_4(struct inode *VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_1)->have_delegation(VAR_1, VAR_0))
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2);
}
