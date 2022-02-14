
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int * rx_indir_table; } ;
typedef int ef4_dword_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int *,scalar_t__) ;

void FUNC_6(struct ef4_nic *VAR_5)
{
 size_t VAR_6 = 0;
 ef4_dword_t VAR_7;

 FUNC_1(FUNC_4(VAR_5) < VAR_0);

 FUNC_2(FUNC_0(VAR_5->rx_indir_table) !=
       VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_3(VAR_7, VAR_1,
         VAR_5->rx_indir_table[VAR_6]);
  FUNC_5(VAR_5, &VAR_7,
      VAR_2 +
      VAR_4 * VAR_6);
 }
}
