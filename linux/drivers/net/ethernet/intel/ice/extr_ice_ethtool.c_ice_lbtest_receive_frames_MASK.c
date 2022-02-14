
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status_error0; } ;
union ice_32b_rx_flex_desc {TYPE_1__ wb; } ;
typedef int u8 ;
struct ice_rx_buf {int page; } ;
struct ice_ring {int count; struct ice_rx_buf* rx_buf; } ;


 union ice_32b_rx_flex_desc* FUNC_0 (struct ice_ring*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ice_ring *VAR_2)
{
 struct ice_rx_buf *VAR_3;
 int VAR_4, VAR_5;
 u8 *VAR_6;

 VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  union ice_32b_rx_flex_desc *VAR_7;

  VAR_7 = FUNC_0(VAR_2, VAR_5);

  if (!(VAR_7->wb.status_error0 &
      FUNC_1(VAR_0 | VAR_1)))
   continue;

  VAR_3 = &VAR_2->rx_buf[VAR_5];
  VAR_6 = FUNC_3(VAR_3->page);

  if (FUNC_2(VAR_6))
   VAR_4++;
 }

 return VAR_4;
}
