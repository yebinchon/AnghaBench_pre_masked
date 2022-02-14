
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_2__ {unsigned int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_4, struct inode *VAR_5)
{
 unsigned int VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = FUNC_0(VAR_5)->flags;

 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_4)->flags &= ~VAR_0;
  FUNC_0(VAR_4)->flags |= VAR_1;
 } else if (VAR_6 & VAR_0) {
  FUNC_0(VAR_4)->flags &= ~VAR_1;
  FUNC_0(VAR_4)->flags |= VAR_0;
 }

 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_4)->flags |= VAR_2;
  if (FUNC_1(VAR_4->i_mode))
   FUNC_0(VAR_4)->flags |= VAR_3;
 }

 FUNC_2(VAR_4);
}
