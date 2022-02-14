
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,int,int ,struct page**,int *) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 unsigned long FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_4,
     unsigned long VAR_5, int VAR_6,
     unsigned long *VAR_7, int *VAR_8)
{
 struct page *VAR_9;




 *VAR_8 = VAR_3;

 if (FUNC_0(VAR_5, 1, VAR_6 ? VAR_1 : 0, &VAR_9, ((void*)0)) <= 0)
  return -VAR_0;
 *VAR_7 = FUNC_2(VAR_9);
 FUNC_3(VAR_9);
 return 0;
}
