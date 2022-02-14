
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct key {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int cell; } ;
struct TYPE_3__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (struct file*) ;
 int FUNC_5 (struct key*,struct page*) ;
 struct key* FUNC_6 (int ) ;
 int FUNC_7 (struct key*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0, struct page *VAR_1)
{
 struct key *VAR_2;
 int VAR_3;

 if (VAR_0) {
  VAR_2 = FUNC_4(VAR_0);
  FUNC_1(VAR_2 != ((void*)0));
  VAR_3 = FUNC_5(VAR_2, VAR_1);
 } else {
  struct inode *VAR_4 = VAR_1->mapping->host;
  VAR_2 = FUNC_6(FUNC_0(VAR_4->i_sb)->cell);
  if (FUNC_2(VAR_2)) {
   VAR_3 = FUNC_3(VAR_2);
  } else {
   VAR_3 = FUNC_5(VAR_2, VAR_1);
   FUNC_7(VAR_2);
  }
 }
 return VAR_3;
}
