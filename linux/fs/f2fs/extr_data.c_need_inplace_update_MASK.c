
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_io_info {TYPE_2__* page; } ;
struct TYPE_4__ {TYPE_1__* mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct inode*,struct f2fs_io_info*) ;
 scalar_t__ FUNC_1 (struct inode*,struct f2fs_io_info*) ;

__attribute__((used)) static inline bool FUNC_2(struct f2fs_io_info *VAR_0)
{
 struct inode *VAR_1 = VAR_0->page->mapping->host;

 if (FUNC_1(VAR_1, VAR_0))
  return 0;

 return FUNC_0(VAR_1, VAR_0);
}
