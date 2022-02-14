
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct inode {int i_mode; } ;
struct TYPE_2__ {int i_attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static inline u8 FUNC_3(struct inode *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3)->i_attrs;
 if (FUNC_1(VAR_3->i_mode))
  VAR_4 |= VAR_0;
 if (FUNC_2(VAR_3) && !(VAR_3->i_mode & VAR_2))
  VAR_4 |= VAR_1;
 return VAR_4;
}
