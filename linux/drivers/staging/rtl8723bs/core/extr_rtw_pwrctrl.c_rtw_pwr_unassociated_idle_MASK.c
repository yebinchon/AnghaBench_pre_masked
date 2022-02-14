
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xmit_priv {scalar_t__ free_xmitbuf_cnt; scalar_t__ free_xmit_extbuf_cnt; } ;
struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; struct adapter* pbuddy_adapter; } ;
struct TYPE_2__ {int ips_deny_time; scalar_t__ bpower_saving; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_11)
{
 struct adapter *VAR_12 = VAR_11->pbuddy_adapter;
 struct mlme_priv *VAR_13 = &(VAR_11->mlmepriv);
 struct xmit_priv *VAR_14 = &VAR_11->xmitpriv;

 bool VAR_15 = 0;

 if (FUNC_1(VAR_11)->bpower_saving) {

  goto exit;
 }

 if (FUNC_3(VAR_10, FUNC_1(VAR_11)->ips_deny_time)) {

  goto exit;
 }

 if (FUNC_2(VAR_13, VAR_5|VAR_6)
  || FUNC_2(VAR_13, VAR_7|VAR_8)
  || FUNC_2(VAR_13, VAR_4)
  || FUNC_2(VAR_13, VAR_2|VAR_3)
 )
  goto exit;


 if (VAR_12) {
  struct mlme_priv *VAR_16 = &(VAR_12->mlmepriv);

  if (FUNC_2(VAR_16, VAR_5|VAR_6)
   || FUNC_2(VAR_16, VAR_7|VAR_8)
   || FUNC_2(VAR_16, VAR_4)
   || FUNC_2(VAR_16, VAR_2|VAR_3)
  )
   goto exit;
 }

 if (VAR_14->free_xmitbuf_cnt != VAR_0 ||
  VAR_14->free_xmit_extbuf_cnt != VAR_1) {
  FUNC_0(VAR_9, "There are some pkts to transmit\n");
  FUNC_0(VAR_9, "free_xmitbuf_cnt: %d, free_xmit_extbuf_cnt: %d\n",
   VAR_14->free_xmitbuf_cnt, VAR_14->free_xmit_extbuf_cnt);
  goto exit;
 }

 VAR_15 = 1;

exit:
 return VAR_15;
}
