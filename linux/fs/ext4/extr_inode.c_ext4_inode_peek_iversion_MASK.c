
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode const*) ;
 int FUNC_1 (struct inode const*) ;
 int FUNC_2 (struct inode const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline u64 FUNC_4(const struct inode *VAR_1)
{
 if (FUNC_3(FUNC_0(VAR_1)->i_flags & VAR_0))
  return FUNC_2(VAR_1);
 else
  return FUNC_1(VAR_1);
}
