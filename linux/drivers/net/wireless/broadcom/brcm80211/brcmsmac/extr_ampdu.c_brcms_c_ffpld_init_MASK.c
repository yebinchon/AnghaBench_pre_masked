
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_fifo_info {int* mcs2ampdu_table; scalar_t__ accum_txfunfl; scalar_t__ prev_txfunfl; scalar_t__ accum_txampdu; scalar_t__ dmaxferrate; scalar_t__ ampdu_pld_size; } ;
struct ampdu_info {struct brcms_fifo_info* fifo_tb; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ampdu_info *VAR_2)
{
 int VAR_3, VAR_4;
 struct brcms_fifo_info *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = (VAR_2->fifo_tb + VAR_4);
  VAR_5->ampdu_pld_size = 0;
  for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
   VAR_5->mcs2ampdu_table[VAR_3] = 255;
  VAR_5->dmaxferrate = 0;
  VAR_5->accum_txampdu = 0;
  VAR_5->prev_txfunfl = 0;
  VAR_5->accum_txfunfl = 0;

 }
}
