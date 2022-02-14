
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
typedef int grant_ref_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct page **VAR_0, u32 *VAR_1,
    int VAR_2, int VAR_3)
{
 grant_ref_t VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_4("Cannot allocate grant references, ret %d\n", VAR_6);
  return VAR_6;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_7;

  VAR_7 = FUNC_1(&VAR_4);
  if (VAR_7 < 0) {
   VAR_6 = VAR_7;
   FUNC_4("Cannot claim grant reference, ret %d\n", VAR_6);
   goto out;
  }

  FUNC_3(VAR_7, VAR_3,
      FUNC_5(VAR_0[VAR_5]), 0);
  VAR_1[VAR_5] = VAR_7;
 }

 return 0;

out:
 FUNC_2(VAR_4);
 return VAR_6;
}
