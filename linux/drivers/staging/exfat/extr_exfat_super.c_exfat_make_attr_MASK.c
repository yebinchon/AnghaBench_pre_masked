
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mode; } ;
struct TYPE_3__ {int attr; } ;
struct TYPE_4__ {TYPE_1__ fid; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static inline u32 FUNC_2(struct inode *VAR_1)
{
 if (FUNC_1(VAR_1) && !(VAR_1->i_mode & 0222))
  return (FUNC_0(VAR_1)->fid.attr) | VAR_0;
 else
  return FUNC_0(VAR_1)->fid.attr;
}
