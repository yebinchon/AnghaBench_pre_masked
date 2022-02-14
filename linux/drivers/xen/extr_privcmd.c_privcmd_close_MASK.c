
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; struct page** vm_private_data; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct page**) ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_area_struct*,int,struct page**) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_2)
{
 struct page **VAR_3 = VAR_2->vm_private_data;
 int VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = (VAR_2->vm_end - VAR_2->vm_start) >> VAR_1;
 int VAR_6;

 if (!FUNC_4(VAR_0) || !VAR_4 || !VAR_3)
  return;

 VAR_6 = FUNC_5(VAR_2, VAR_5, VAR_3);
 if (VAR_6 == 0)
  FUNC_0(VAR_4, VAR_3);
 else
  FUNC_2("unable to unmap MFN range: leaking %d pages. rc=%d\n",
   VAR_4, VAR_6);
 FUNC_1(VAR_3);
}
