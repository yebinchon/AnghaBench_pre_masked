
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,...) ;
 int FUNC_1 (unsigned long,int,int ,void**) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct page **VAR_2)
{
 int VAR_3;

 FUNC_0("uva %p", VAR_1);

 VAR_3 = FUNC_1((unsigned long)VAR_1, 1, VAR_0, VAR_2);
 if (VAR_3 == 1) {
  FUNC_0("locked page %p, for VA %p", *VAR_2, VAR_1);
  return 0;
 }

 FUNC_0("get_user_pages failed, va=%p, ret=%d", VAR_1, VAR_3);
 return -1;
}
