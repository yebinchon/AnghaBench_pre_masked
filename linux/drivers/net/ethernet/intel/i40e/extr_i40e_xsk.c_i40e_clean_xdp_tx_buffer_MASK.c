
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_tx_buffer {int xdpf; } ;
struct i40e_ring {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_tx_buffer*,int ) ;
 int FUNC_1 (struct i40e_tx_buffer*,int ) ;
 int FUNC_2 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_ring *VAR_3,
         struct i40e_tx_buffer *VAR_4)
{
 FUNC_4(VAR_4->xdpf);
 FUNC_3(VAR_3->dev,
    FUNC_0(VAR_4, VAR_1),
    FUNC_1(VAR_4, VAR_2), VAR_0);
 FUNC_2(VAR_4, VAR_2, 0);
}
