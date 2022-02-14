
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ucc_geth_private {TYPE_3__* p_rx_glbl_pram; TYPE_2__* ug_info; struct ucc_fast_private* uccf; } ;
struct ucc_fast_private {int stopped_rx; } ;
struct TYPE_6__ {int rxgstpack; } ;
struct TYPE_4__ {int ucc_num; } ;
struct TYPE_5__ {TYPE_1__ uf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ucc_geth_private *VAR_3)
{
 struct ucc_fast_private *VAR_4;
 u32 VAR_5;
 u8 VAR_6;
 int VAR_7 = 10;

 VAR_4 = VAR_3->uccf;


 VAR_6 = FUNC_0(&VAR_3->p_rx_glbl_pram->rxgstpack);
 VAR_6 &= ~VAR_0;
 FUNC_2(&VAR_3->p_rx_glbl_pram->rxgstpack, VAR_6);



 do {

  VAR_5 =
      FUNC_4(VAR_3->ug_info->uf_info.
      ucc_num);
  FUNC_3(VAR_2, VAR_5,
        VAR_1, 0);
  FUNC_1(10);
  VAR_6 = FUNC_0(&VAR_3->p_rx_glbl_pram->rxgstpack);
 } while (!(VAR_6 & VAR_0) && --VAR_7);

 VAR_4->stopped_rx = 1;

 return 0;
}
