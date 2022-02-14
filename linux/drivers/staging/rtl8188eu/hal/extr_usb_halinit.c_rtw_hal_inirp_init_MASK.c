
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct recv_priv {struct recv_buf* precv_buf; } ;
struct recv_buf {int dummy; } ;
struct adapter {struct recv_priv recvpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct adapter*,int ,struct recv_buf*) ;

u32 FUNC_2(struct adapter *VAR_7)
{
 u8 VAR_8;
 struct recv_buf *VAR_9;
 uint VAR_10;
 struct recv_priv *VAR_11 = &VAR_7->recvpriv;

 VAR_10 = VAR_3;

 FUNC_0(VAR_6, VAR_5,
   ("===> usb_inirp_init\n"));


 VAR_9 = VAR_11->precv_buf;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!FUNC_1(VAR_7, VAR_1, VAR_9)) {
   FUNC_0(VAR_6, VAR_4, ("usb_rx_init: usb_read_port error\n"));
   VAR_10 = VAR_2;
   goto exit;
  }

  VAR_9++;
 }

exit:

 FUNC_0(VAR_6, VAR_5, ("<=== usb_inirp_init\n"));

 return VAR_10;
}
