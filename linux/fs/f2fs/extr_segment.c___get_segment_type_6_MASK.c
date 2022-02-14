
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_write_hint; } ;
struct f2fs_io_info {scalar_t__ type; TYPE_2__* page; } ;
struct TYPE_6__ {TYPE_1__* mapping; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_9(struct f2fs_io_info *VAR_7)
{
 if (VAR_7->type == VAR_5) {
  struct inode *VAR_8 = VAR_7->page->mapping->host;

  if (FUNC_6(VAR_7->page) || FUNC_4(VAR_8))
   return VAR_0;
  if (FUNC_5(VAR_8) ||
    FUNC_8(VAR_8, VAR_6) ||
    FUNC_1(VAR_8) ||
    FUNC_2(VAR_8))
   return VAR_2;
  return FUNC_3(VAR_8->i_write_hint);
 } else {
  if (FUNC_0(VAR_7->page))
   return FUNC_7(VAR_7->page) ? VAR_4 :
      VAR_3;
  return VAR_1;
 }
}
