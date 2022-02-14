
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int ,char*,struct page*) ;
 int FUNC_2 (struct page*,int ) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_1, gfp_t VAR_2)
{
 FUNC_1(VAR_0, "NFS: release_page(%p)\n", VAR_1);


 if (FUNC_0(VAR_1))
  return 0;
 return FUNC_2(VAR_1, VAR_2);
}
