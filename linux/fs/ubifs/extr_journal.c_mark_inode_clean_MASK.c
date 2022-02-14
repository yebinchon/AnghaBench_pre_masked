
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ dirty; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,struct ubifs_inode*) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0, struct ubifs_inode *VAR_1)
{
 if (VAR_1->dirty)
  FUNC_0(VAR_0, VAR_1);
 VAR_1->dirty = 0;
}
