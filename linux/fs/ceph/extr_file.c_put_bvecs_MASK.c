
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {scalar_t__ bv_page; } ;


 int FUNC_0 (struct bio_vec*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bio_vec *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].bv_page) {
   if (VAR_2)
    FUNC_2(VAR_0[VAR_3].bv_page);
   FUNC_1(VAR_0[VAR_3].bv_page);
  }
 }
 FUNC_0(VAR_0);
}
