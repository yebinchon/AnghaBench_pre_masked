
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct page*,struct writeback_control*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct writeback_control*,struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_3, struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->mapping->host;
 int VAR_6;

 if (VAR_2->flags & VAR_1) {
  FUNC_3(VAR_4, VAR_3);
  FUNC_4(VAR_3);
  return 0;
 }






 if (!FUNC_2(VAR_5)) {
  FUNC_3(VAR_4, VAR_3);
  return VAR_0;
 }
 VAR_6 = FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_5);
 return VAR_6;
}
