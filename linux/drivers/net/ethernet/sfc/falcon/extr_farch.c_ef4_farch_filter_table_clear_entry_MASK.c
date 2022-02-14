
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
struct ef4_farch_filter_table {scalar_t__ offset; scalar_t__ used; unsigned int step; scalar_t__ id; int * search_limit; int * spec; int used_bitmap; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int *,scalar_t__) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (unsigned int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct ef4_nic *VAR_1,
       struct ef4_farch_filter_table *VAR_2,
       unsigned int VAR_3)
{
 static ef4_oword_t VAR_4;

 FUNC_1(!FUNC_7(VAR_3, VAR_2->used_bitmap));
 FUNC_0(VAR_2->offset == 0);

 FUNC_2(VAR_3, VAR_2->used_bitmap);
 --VAR_2->used;
 FUNC_6(&VAR_2->spec[VAR_3], 0, sizeof(VAR_2->spec[0]));

 FUNC_5(VAR_1, &VAR_4, VAR_2->offset + VAR_2->step * VAR_3);







 if (FUNC_8(VAR_2->used == 0)) {
  FUNC_6(VAR_2->search_limit, 0, sizeof(VAR_2->search_limit));
  if (VAR_2->id == VAR_0)
   FUNC_4(VAR_1);
  else
   FUNC_3(VAR_1);
 }
}
