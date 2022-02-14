
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;} ;
struct TYPE_2__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct btc_coexist*,int) ;
 int FUNC_1 (struct btc_coexist*,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 VAR_4 = 0x770;
 VAR_5 = 0x774;

 VAR_6 = VAR_3->btc_read_4byte(VAR_3, VAR_4);
 VAR_7 = VAR_6 & VAR_1;
 VAR_8 = (VAR_6 & VAR_0) >> 16;

 VAR_6 = VAR_3->btc_read_4byte(VAR_3, VAR_5);
 VAR_9 = VAR_6 & VAR_1;
 VAR_10 = (VAR_6 & VAR_0) >> 16;

 VAR_2->high_priority_tx = VAR_7;
 VAR_2->high_priority_rx = VAR_8;
 VAR_2->low_priority_tx = VAR_9;
 VAR_2->low_priority_rx = VAR_10;


 VAR_3->btc_write_1byte(VAR_3, 0x76e, 0xc);
}
