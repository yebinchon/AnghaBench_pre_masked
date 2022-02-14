
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_0, struct writeback_control *VAR_1)
{
 struct inode *VAR_2 = VAR_0->mapping->host;
 FUNC_0(VAR_2->i_sb);
 return FUNC_1(VAR_0, VAR_1);
}
