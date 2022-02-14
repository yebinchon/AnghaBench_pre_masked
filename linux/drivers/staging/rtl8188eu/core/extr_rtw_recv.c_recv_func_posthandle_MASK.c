
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int dummy; } ;
struct recv_priv {int rx_drop; struct __queue free_recv_queue; } ;
struct recv_frame {int dummy; } ;
struct adapter {struct recv_priv recvpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adapter*,struct recv_frame*,int *) ;
 struct recv_frame* FUNC_2 (struct adapter*,struct recv_frame*) ;
 int FUNC_3 (struct adapter*,int ) ;
 struct recv_frame* FUNC_4 (struct adapter*,struct recv_frame*) ;
 int FUNC_5 (struct adapter*,struct recv_frame*) ;
 struct recv_frame* FUNC_6 (struct adapter*,struct recv_frame*) ;
 int FUNC_7 (struct recv_frame*,struct __queue*) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_5,
    struct recv_frame *VAR_6)
{
 int VAR_7 = VAR_2;
 struct recv_frame *VAR_8 = VAR_6;
 struct recv_priv *VAR_9 = &VAR_5->recvpriv;
 struct __queue *VAR_10 = &VAR_5->recvpriv.free_recv_queue;


 FUNC_3(VAR_5, VAR_0);

 VAR_6 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_6) {
  FUNC_0(VAR_4, VAR_3, ("decryptor: drop pkt\n"));
  VAR_7 = VAR_1;
  goto _recv_data_drop;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_6);
 if (!VAR_6) {
  FUNC_0(VAR_4, VAR_3, ("recvframe_chk_defrag: drop pkt\n"));
  goto _recv_data_drop;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_6) {
  FUNC_0(VAR_4, VAR_3, ("portctrl: drop pkt\n"));
  VAR_7 = VAR_1;
  goto _recv_data_drop;
 }

 FUNC_1(VAR_5, VAR_6, ((void*)0));

 VAR_7 = FUNC_5(VAR_5, VAR_6);
 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_4, VAR_3, ("recv_func: process_recv_indicatepkts fail!\n"));
  FUNC_7(VAR_8, VAR_10);
  goto _recv_data_drop;
 }
 return VAR_7;

_recv_data_drop:
 VAR_9->rx_drop++;
 return VAR_7;
}
