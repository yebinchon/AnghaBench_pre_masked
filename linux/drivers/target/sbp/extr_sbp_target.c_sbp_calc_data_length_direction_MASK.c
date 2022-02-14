
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int misc; } ;
struct sbp_target_request {TYPE_1__* pg_tbl; TYPE_2__ orb; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {int segment_length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sbp_target_request *VAR_3,
 u32 *VAR_4, enum dma_data_direction *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(FUNC_3(VAR_3->orb.misc));
 VAR_7 = FUNC_1(FUNC_3(VAR_3->orb.misc));

 if (!VAR_6) {
  *VAR_4 = 0;
  *VAR_5 = VAR_1;
  return;
 }

 *VAR_5 = VAR_7 ? VAR_0 : VAR_2;

 if (VAR_3->pg_tbl) {
  *VAR_4 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   *VAR_4 += FUNC_2(
     VAR_3->pg_tbl[VAR_8].segment_length);
  }
 } else {
  *VAR_4 = VAR_6;
 }
}
