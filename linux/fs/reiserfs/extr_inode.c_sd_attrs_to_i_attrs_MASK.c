
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_sb; } ;
typedef int __u16 ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(__u16 VAR_10, struct inode *VAR_11)
{
 if (FUNC_1(VAR_11->i_sb)) {
  if (VAR_10 & VAR_4)
   VAR_11->i_flags |= VAR_8;
  else
   VAR_11->i_flags &= ~VAR_8;
  if (VAR_10 & VAR_1)
   VAR_11->i_flags |= VAR_6;
  else
   VAR_11->i_flags &= ~VAR_6;
  if (VAR_10 & VAR_0)
   VAR_11->i_flags |= VAR_5;
  else
   VAR_11->i_flags &= ~VAR_5;
  if (VAR_10 & VAR_2)
   VAR_11->i_flags |= VAR_7;
  else
   VAR_11->i_flags &= ~VAR_7;
  if (VAR_10 & VAR_3)
   FUNC_0(VAR_11)->i_flags |= VAR_9;
  else
   FUNC_0(VAR_11)->i_flags &= ~VAR_9;
 }
}
