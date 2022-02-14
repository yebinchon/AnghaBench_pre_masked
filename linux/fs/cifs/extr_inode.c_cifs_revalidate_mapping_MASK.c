
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned long flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,unsigned long*) ;
 int FUNC_6 (unsigned long*,int ,int ,int ) ;
 int FUNC_7 (unsigned long*,int ) ;

int
FUNC_8(struct inode *VAR_4)
{
 int VAR_5;
 unsigned long *VAR_6 = &FUNC_0(VAR_4)->flags;

 VAR_5 = FUNC_6(VAR_6, VAR_1, VAR_3,
         VAR_2);
 if (VAR_5)
  return VAR_5;

 if (FUNC_5(VAR_0, VAR_6)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   FUNC_3(VAR_0, VAR_6);
 }

 FUNC_2(VAR_1, VAR_6);
 FUNC_4();
 FUNC_7(VAR_6, VAR_1);

 return VAR_5;
}
