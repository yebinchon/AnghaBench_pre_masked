
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct mpage_da_data {scalar_t__ first_page; TYPE_1__* wbc; int io_submit; int inode; } ;
typedef int loff_t ;
struct TYPE_2__ {int nr_to_write; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,struct page*,int,TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mpage_da_data *VAR_3, struct page *VAR_4)
{
 int VAR_5;
 loff_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_4->index != VAR_3->first_page);
 FUNC_1(VAR_4);
 VAR_6 = FUNC_4(VAR_3->inode);
 if (VAR_4->index == VAR_6 >> VAR_1 &&
     !FUNC_3(VAR_3->inode))
  VAR_5 = VAR_6 & ~VAR_0;
 else
  VAR_5 = VAR_2;
 VAR_7 = FUNC_2(&VAR_3->io_submit, VAR_4, VAR_5, VAR_3->wbc, 0);
 if (!VAR_7)
  VAR_3->wbc->nr_to_write--;
 VAR_3->first_page++;

 return VAR_7;
}
