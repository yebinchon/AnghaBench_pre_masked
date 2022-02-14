
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xen_gfn_fn_t ) (int ,void*) ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct page **VAR_1, unsigned VAR_2,
        xen_gfn_fn_t VAR_3, void *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct page *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if ((VAR_7 % VAR_0) == 0) {
   VAR_6 = VAR_1[VAR_7 / VAR_0];
   VAR_5 = FUNC_0(VAR_6);
  }
  VAR_3(FUNC_1(VAR_5++), VAR_4);
 }
}
