
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_priv {int status; } ;
struct il_host_cmd {scalar_t__ reply_page; int flags; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct il_priv*,scalar_t__) ;
 int FUNC_2 (struct il_priv*,struct il_host_cmd*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_9)
{
 int VAR_10;
 struct il_rx_pkt *VAR_11;
 struct il_host_cmd VAR_12 = {
  .id = VAR_2,
  .flags = VAR_1,
 };




 if (!FUNC_3(VAR_7, &VAR_9->status) ||
     !FUNC_3(VAR_6, &VAR_9->status) ||
     !FUNC_3(VAR_8, &VAR_9->status) ||
     FUNC_3(VAR_5, &VAR_9->status) ||
     FUNC_3(VAR_4, &VAR_9->status))
  return -VAR_3;

 VAR_10 = FUNC_2(VAR_9, &VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_11 = (struct il_rx_pkt *)VAR_12.reply_page;
 if (VAR_11->u.status != VAR_0) {






  FUNC_0("SCAN_ABORT ret %d.\n", VAR_11->u.status);
  VAR_10 = -VAR_3;
 }

 FUNC_1(VAR_9, VAR_12.reply_page);
 return VAR_10;
}
