
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct list_head {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int (* compress_pages ) (struct list_head*,struct address_space*,int ,struct page**,unsigned long*,unsigned long*,unsigned long*) ;} ;


 int FUNC_0 (unsigned int) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned int) ;
 struct list_head* FUNC_3 (int,int) ;
 int FUNC_4 (int,struct list_head*) ;
 int FUNC_5 (struct list_head*,struct address_space*,int ,struct page**,unsigned long*,unsigned long*,unsigned long*) ;

int FUNC_6(unsigned int VAR_1, struct address_space *VAR_2,
    u64 VAR_3, struct page **VAR_4,
    unsigned long *VAR_5,
    unsigned long *VAR_6,
    unsigned long *VAR_7)
{
 int VAR_8 = FUNC_2(VAR_1);
 int VAR_9 = FUNC_0(VAR_1);
 struct list_head *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_8, VAR_9);
 VAR_11 = VAR_0[VAR_8]->compress_pages(VAR_10, VAR_2,
            VAR_3, VAR_4,
            VAR_5,
            VAR_6, VAR_7);
 FUNC_4(VAR_8, VAR_10);
 return VAR_11;
}
