
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int exist_sw_net_addr; scalar_t__ preamble_type; int auto_fb_ctrl; int bb_type; int packet_type; int op_mode; int long_retry_limit; int short_retry_limit; scalar_t__ num_rcb; scalar_t__ num_tx_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_0(struct vnt_private *VAR_13)
{

 if (VAR_12 < VAR_5 || VAR_12 > VAR_3)
  VAR_13->num_tx_context = VAR_10;
 else
  VAR_13->num_tx_context = VAR_12;


 if (VAR_11 < VAR_4 || VAR_11 > VAR_2)
  VAR_13->num_rcb = VAR_8;
 else
  VAR_13->num_rcb = VAR_11;

 VAR_13->short_retry_limit = VAR_9;
 VAR_13->long_retry_limit = VAR_6;
 VAR_13->op_mode = VAR_7;
 VAR_13->bb_type = VAR_1;
 VAR_13->packet_type = VAR_13->bb_type;
 VAR_13->auto_fb_ctrl = VAR_0;
 VAR_13->preamble_type = 0;
 VAR_13->exist_sw_net_addr = 0;
}
