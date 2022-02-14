
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct c_can_priv {int last_status; int (* read_reg ) (struct c_can_priv*,int ) ;scalar_t__ type; TYPE_1__ can; int (* write_reg ) (struct c_can_priv*,int ,int ) ;int sie_pending; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct c_can_priv*,int) ;
 int FUNC_6 (struct napi_struct*,int) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct c_can_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct c_can_priv*,int ) ;
 int FUNC_10 (struct c_can_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct napi_struct *VAR_12, int VAR_13)
{
 struct net_device *VAR_14 = VAR_12->dev;
 struct c_can_priv *VAR_15 = FUNC_8(VAR_14);
 u16 VAR_16, VAR_17 = VAR_15->last_status;
 int VAR_18 = 0;


 if (FUNC_0(&VAR_15->sie_pending, 0)) {
  VAR_15->last_status = VAR_16 = VAR_15->read_reg(VAR_15, VAR_6);

  if (VAR_15->type != VAR_0)
   VAR_15->write_reg(VAR_15, VAR_6, VAR_8);
 } else {

  VAR_16 = VAR_17;
 }


 if ((VAR_16 & VAR_11) && (!(VAR_17 & VAR_11))) {
  FUNC_7(VAR_14, "entered error warning state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_4);
 }

 if ((VAR_16 & VAR_10) && (!(VAR_17 & VAR_10))) {
  FUNC_7(VAR_14, "entered error passive state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_3);
 }

 if ((VAR_16 & VAR_9) && (!(VAR_17 & VAR_9))) {
  FUNC_7(VAR_14, "entered bus off state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_2);
  goto end;
 }


 if ((!(VAR_16 & VAR_9)) && (VAR_17 & VAR_9)) {
  FUNC_7(VAR_14, "left bus off state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_3);
 }

 if ((!(VAR_16 & VAR_10)) && (VAR_17 & VAR_10)) {
  FUNC_7(VAR_14, "left error passive state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_4);
 }

 if ((!(VAR_16 & VAR_11)) && (VAR_17 & VAR_11)) {
  FUNC_7(VAR_14, "left error warning state\n");
  VAR_18 += FUNC_4(VAR_14, VAR_5);
 }


 VAR_18 += FUNC_3(VAR_14, VAR_16 & VAR_7);


 VAR_18 += FUNC_1(VAR_14, (VAR_13 - VAR_18));
 FUNC_2(VAR_14);

end:
 if (VAR_18 < VAR_13) {
  FUNC_6(VAR_12, VAR_18);

  if (VAR_15->can.state != VAR_1)
   FUNC_5(VAR_15, 1);
 }

 return VAR_18;
}
