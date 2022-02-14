
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_params {unsigned int chan_rx_size; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adapter*,int ,int) ;
 int FUNC_1 (struct adapter*,int ,unsigned int,int) ;
 int FUNC_2 (struct adapter*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_7, const struct tp_params *VAR_8)
{
 unsigned int VAR_9 = VAR_8->chan_rx_size;

 FUNC_1(VAR_7, VAR_1, VAR_9, VAR_8->chan_rx_size / 8);
 FUNC_1(VAR_7, VAR_5, VAR_9, VAR_8->chan_rx_size / 8);
 FUNC_2(VAR_7, VAR_6, VAR_9, VAR_8->chan_rx_size / 4);
 FUNC_1(VAR_7, VAR_4, VAR_9, VAR_8->chan_rx_size / 4);
 FUNC_1(VAR_7, VAR_3, VAR_9, VAR_8->chan_rx_size / 4);
 FUNC_2(VAR_7, VAR_2, VAR_9, VAR_8->chan_rx_size / 4);
 FUNC_1(VAR_7, VAR_2, VAR_9, VAR_8->chan_rx_size / 4);
 FUNC_0(VAR_7, VAR_0, 0xffffffff);
}
