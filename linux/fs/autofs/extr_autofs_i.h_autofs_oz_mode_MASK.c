
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_sb_info {int flags; scalar_t__ oz_pgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct autofs_sb_info *VAR_2)
{
 return ((VAR_2->flags & VAR_0) ||
   FUNC_0(VAR_1) == VAR_2->oz_pgrp);
}
