
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int *) ;} ;
struct TYPE_2__ {int c2h_bt_info_req_sent; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct btc_coexist*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_1)
{
 u8 VAR_2[1] = {0};

 VAR_0->c2h_bt_info_req_sent = 1;


 VAR_2[0] |= FUNC_0(0);

 VAR_1->btc_fill_h2c(VAR_1, 0x61, 1, VAR_2);
}
