
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i40e_rx_desc {int dummy; } i40e_rx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40e_rx_buffer {int dummy; } ;
struct i40e_ring {int next_to_clean; int count; struct i40e_rx_buffer* rx_bi; } ;


 int FUNC_0 (struct i40e_ring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_ring*,union i40e_rx_desc*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

struct i40e_rx_buffer *FUNC_4(
 struct i40e_ring *VAR_3,
 union i40e_rx_desc *VAR_4,
 u64 VAR_5)
{
 struct i40e_rx_buffer *VAR_6;
 u32 VAR_7;
 u8 VAR_8;

 if (!FUNC_2(VAR_5))
  return ((void*)0);

 VAR_7 = VAR_3->next_to_clean;


 VAR_6 = &VAR_3->rx_bi[VAR_7++];
 VAR_7 = (VAR_7 < VAR_3->count) ? VAR_7 : 0;
 VAR_3->next_to_clean = VAR_7;

 FUNC_3(FUNC_0(VAR_3, VAR_7));

 VAR_8 = (VAR_5 & VAR_1) >>
    VAR_2;

 if (VAR_8 == VAR_0)
  FUNC_1(VAR_3, VAR_4, VAR_8);

 return VAR_6;
}
