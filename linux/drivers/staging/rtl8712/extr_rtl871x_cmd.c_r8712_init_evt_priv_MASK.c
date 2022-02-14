
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evt_priv {scalar_t__ evt_done_cnt; scalar_t__ evt_allocated_buf; scalar_t__ evt_buf; scalar_t__ event_seq; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

int FUNC_1(struct evt_priv *VAR_3)
{

 VAR_3->event_seq = 0;
 VAR_3->evt_allocated_buf = FUNC_0(VAR_2 + 4, VAR_1);

 if (!VAR_3->evt_allocated_buf)
  return -VAR_0;
 VAR_3->evt_buf = VAR_3->evt_allocated_buf + 4 -
       ((addr_t)(VAR_3->evt_allocated_buf) & 3);
 VAR_3->evt_done_cnt = 0;
 return 0;
}
