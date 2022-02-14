
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_table {scalar_t__* search_limit; scalar_t__ size; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
typedef int ef4_oword_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ef4_nic*,int *,int ) ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_8)
{
 struct ef4_farch_filter_state *VAR_9 = VAR_8->filter_state;
 struct ef4_farch_filter_table *VAR_10;
 ef4_oword_t VAR_11;

 FUNC_1(VAR_8, &VAR_11, VAR_7);

 VAR_10 = &VAR_9->table[VAR_4];
 if (VAR_10->size) {
  FUNC_0(
   VAR_11, VAR_5,
   VAR_10->search_limit[VAR_2] +
   VAR_0);
  FUNC_0(
   VAR_11, VAR_6,
   VAR_10->search_limit[VAR_3] +
   VAR_1);
 }

 FUNC_2(VAR_8, &VAR_11, VAR_7);
}
