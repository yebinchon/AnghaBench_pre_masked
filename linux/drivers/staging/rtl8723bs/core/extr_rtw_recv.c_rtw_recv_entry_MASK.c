
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct adapter* adapter; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct recv_priv {int rx_pkts; } ;
struct adapter {struct recv_priv recvpriv; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct adapter*,union recv_frame*) ;

s32 FUNC_2(union recv_frame *VAR_4)
{
 struct adapter *VAR_5;
 struct recv_priv *VAR_6;
 s32 VAR_7 = VAR_1;



 VAR_5 = VAR_4->u.hdr.adapter;

 VAR_6 = &VAR_5->recvpriv;

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_7 == VAR_0) {
  FUNC_0(VAR_3, VAR_2, ("rtw_recv_entry: recv_func return fail!!!\n"));
  goto _recv_entry_drop;
 }


 VAR_6->rx_pkts++;

 return VAR_7;

_recv_entry_drop:



 return VAR_7;
}
