
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_options {int bbp_type; int long_retry; int short_retry; int int_works; int * tx_descs; int rx_descs1; int rx_descs0; } ;
struct vnt_private {struct vnt_options opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct vnt_private *VAR_8)
{
 struct vnt_options *VAR_9 = &VAR_8->opts;

 VAR_9->rx_descs0 = VAR_3;
 VAR_9->rx_descs1 = VAR_4;
 VAR_9->tx_descs[0] = VAR_6;
 VAR_9->tx_descs[1] = VAR_7;
 VAR_9->int_works = VAR_1;

 VAR_9->short_retry = VAR_5;
 VAR_9->long_retry = VAR_2;
 VAR_9->bbp_type = VAR_0;
}
