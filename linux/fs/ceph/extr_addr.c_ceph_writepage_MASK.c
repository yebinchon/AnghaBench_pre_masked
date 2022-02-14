
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = VAR_1->mapping->host;
 FUNC_0(!VAR_4);
 FUNC_1(VAR_4);
 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 == -VAR_0) {


  VAR_3 = 0;
 }
 FUNC_3(VAR_1);
 FUNC_2(VAR_4);
 return VAR_3;
}
