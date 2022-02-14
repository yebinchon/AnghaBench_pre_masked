
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct f2fs_io_info {scalar_t__ type; TYPE_2__* page; } ;
struct TYPE_5__ {TYPE_1__* mapping; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct f2fs_io_info *VAR_5)
{
 if (VAR_5->type == VAR_4) {
  struct inode *VAR_6 = VAR_5->page->mapping->host;

  if (FUNC_1(VAR_6->i_mode))
   return VAR_2;
  else
   return VAR_0;
 } else {
  if (FUNC_0(VAR_5->page) && FUNC_2(VAR_5->page))
   return VAR_3;
  else
   return VAR_1;
 }
}
