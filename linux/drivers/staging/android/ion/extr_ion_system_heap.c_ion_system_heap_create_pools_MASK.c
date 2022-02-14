
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_page_pool {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ion_page_pool* FUNC_0 (int ,int) ;
 int FUNC_1 (struct ion_page_pool**) ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct ion_page_pool **VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct ion_page_pool *VAR_7;
  gfp_t VAR_8 = VAR_3;

  if (VAR_4[VAR_6] > 4)
   VAR_8 = VAR_2;

  VAR_7 = FUNC_0(VAR_8, VAR_4[VAR_6]);
  if (!VAR_7)
   goto err_create_pool;
  VAR_5[VAR_6] = VAR_7;
 }

 return 0;

err_create_pool:
 FUNC_1(VAR_5);
 return -VAR_0;
}
