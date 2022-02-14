
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (struct page**,int,int,int ) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(struct page **VAR_2, int VAR_3, pgprot_t VAR_4)
{
 void *VAR_5 = FUNC_1(VAR_2, VAR_3, -1, VAR_4);

 if (!VAR_5)
  return -VAR_0;
 FUNC_0(VAR_5, 0, VAR_1 * VAR_3);
 FUNC_2(VAR_5, VAR_3);

 return 0;
}
