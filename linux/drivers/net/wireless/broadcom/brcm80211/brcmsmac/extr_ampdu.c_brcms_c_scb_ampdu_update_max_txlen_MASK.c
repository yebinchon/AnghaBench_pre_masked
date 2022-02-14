
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct ampdu_info {size_t*** max_txlen; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int,int) ;

__attribute__((used)) static void FUNC_1(struct ampdu_info *VAR_1, u8 VAR_2)
{
 u32 VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {


  VAR_3 = FUNC_0(VAR_4, 0, 0);
  VAR_1->max_txlen[VAR_4][0][0] = (VAR_3 * VAR_2) >> 3;

  VAR_3 = FUNC_0(VAR_4, 1, 0);
  VAR_1->max_txlen[VAR_4][1][0] = (VAR_3 * VAR_2) >> 3;

  VAR_3 = FUNC_0(VAR_4, 0, 1);
  VAR_1->max_txlen[VAR_4][0][1] = (VAR_3 * VAR_2) >> 3;

  VAR_3 = FUNC_0(VAR_4, 1, 1);
  VAR_1->max_txlen[VAR_4][1][1] = (VAR_3 * VAR_2) >> 3;
 }
}
