
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int host; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {int mmu_private; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,void**,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct address_space*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page **VAR_6, void **VAR_7)
{
 int VAR_8;

 *VAR_6 = ((void*)0);
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, VAR_0,
    &FUNC_0(VAR_2->host)->mmu_private);
 if (VAR_8 < 0)
  FUNC_2(VAR_2, VAR_3 + VAR_4);
 return VAR_8;
}
