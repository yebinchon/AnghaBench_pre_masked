
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; int i_sb; } ;
struct TYPE_3__ {scalar_t__ file_type; } ;
typedef TYPE_1__ ext2_dirent ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(ext2_dirent *VAR_1, struct inode *VAR_2)
{
 if (FUNC_0(VAR_2->i_sb, VAR_0))
  VAR_1->file_type = FUNC_1(VAR_2->i_mode);
 else
  VAR_1->file_type = 0;
}
