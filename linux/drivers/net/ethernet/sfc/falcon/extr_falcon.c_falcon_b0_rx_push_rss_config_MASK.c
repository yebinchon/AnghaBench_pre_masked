
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int temp ;
struct ef4_nic {int * rx_indir_table; int const* rx_hash_key; } ;
typedef int ef4_oword_t ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int *,int ) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct ef4_nic *VAR_1, bool VAR_2,
     const u32 *VAR_3)
{
 ef4_oword_t VAR_4;

 (void) VAR_2;

 FUNC_2(&VAR_4, VAR_1->rx_hash_key, sizeof(VAR_4));
 FUNC_1(VAR_1, &VAR_4, VAR_0);

 FUNC_2(VAR_1->rx_indir_table, VAR_3,
        sizeof(VAR_1->rx_indir_table));
 FUNC_0(VAR_1);
 return 0;
}
