
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_priv {scalar_t__ pallocated_frame_buf; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct recv_priv*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct recv_priv *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->adapter;

 FUNC_0(VAR_1);

 FUNC_2(VAR_0);

 if (VAR_0->pallocated_frame_buf)
  FUNC_3(VAR_0->pallocated_frame_buf);

 FUNC_1(VAR_1);
}
