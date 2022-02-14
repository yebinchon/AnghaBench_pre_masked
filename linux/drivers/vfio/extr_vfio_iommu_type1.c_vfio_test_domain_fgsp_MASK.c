
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_domain {int prot; int fgsp; int domain; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,int) ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int,int) ;
 size_t FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct vfio_domain *VAR_5)
{
 struct page *VAR_6;
 int VAR_7, VAR_8 = FUNC_2(VAR_3 * 2);

 VAR_6 = FUNC_1(VAR_0 | VAR_4, VAR_8);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_3(VAR_5->domain, 0, FUNC_5(VAR_6), VAR_3 * 2,
   VAR_1 | VAR_2 | VAR_5->prot);
 if (!VAR_7) {
  size_t VAR_9 = FUNC_4(VAR_5->domain, 0, VAR_3);

  if (VAR_9 == VAR_3)
   FUNC_4(VAR_5->domain, VAR_3, VAR_3);
  else
   VAR_5->fgsp = 1;
 }

 FUNC_0(VAR_6, VAR_8);
}
