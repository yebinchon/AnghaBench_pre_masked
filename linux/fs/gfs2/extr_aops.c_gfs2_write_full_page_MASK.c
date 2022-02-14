
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {scalar_t__ const index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int get_block_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode* const,struct page*,int *,struct writeback_control*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct inode* const) ;
 int FUNC_2 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_3, get_block_t *VAR_4,
    struct writeback_control *VAR_5)
{
 struct inode * const VAR_6 = VAR_3->mapping->host;
 loff_t VAR_7 = FUNC_1(VAR_6);
 const pgoff_t VAR_8 = VAR_7 >> VAR_0;
 unsigned VAR_9;
 VAR_9 = VAR_7 & (VAR_1-1);
 if (VAR_3->index == VAR_8 && VAR_9)
  FUNC_2(VAR_3, VAR_9, VAR_1);

 return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5,
           VAR_2);
}
