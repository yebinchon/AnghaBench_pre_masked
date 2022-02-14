
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_device_id {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct vio_dev {scalar_t__ unit_address; TYPE_1__ dev; int irq; } ;
struct hvterm_priv {scalar_t__ termno; int hvsi; int buf_lock; scalar_t__ proto; } ;
struct hvc_struct {scalar_t__ index; } ;
struct hv_ops {int dummy; } ;
typedef scalar_t__ hv_protocol_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct hvc_struct*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hvc_struct*) ;
 int FUNC_2 (TYPE_1__*,struct hvc_struct*) ;
 struct hvc_struct* FUNC_3 (int,int ,struct hv_ops const*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int ,scalar_t__,int ) ;
 struct hv_ops VAR_11 ;
 struct hvterm_priv VAR_12 ;
 struct hvterm_priv** VAR_13 ;
 struct hv_ops VAR_14 ;
 struct hvterm_priv* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static int FUNC_10(struct vio_dev *VAR_21,
       const struct vio_device_id *VAR_22)
{
 const struct hv_ops *VAR_23;
 struct hvc_struct *VAR_24;
 struct hvterm_priv *VAR_25;
 hv_protocol_t VAR_26;
 int VAR_27, VAR_28 = -1;


 if (!VAR_21 || !VAR_22)
  return -VAR_3;

 if (FUNC_6(VAR_21->dev.of_node, "hvterm1")) {
  VAR_26 = VAR_6;
  VAR_23 = &VAR_14;
 } else if (FUNC_6(VAR_21->dev.of_node, "hvterm-protocol")) {
  VAR_26 = VAR_5;
  VAR_23 = &VAR_11;
 } else {
  FUNC_8("hvc_vio: Unknown protocol for %pOF\n", VAR_21->dev.of_node);
  return -VAR_2;
 }

 FUNC_7("hvc_vio_probe() device %pOF, using %s protocol\n",
   VAR_21->dev.of_node,
   VAR_26 == VAR_6 ? "raw" : "hvsi");


 if (VAR_13[0] == &VAR_12 &&
     VAR_21->unit_address == VAR_12) {
  VAR_25 = VAR_13[0];
  VAR_28 = 0;
  FUNC_7("->boot console, using termno 0\n");
 }

 else {
  for (VAR_27 = 0; VAR_27 < VAR_7 && VAR_28 < 0; VAR_27++)
   if (!VAR_13[VAR_27])
    VAR_28 = VAR_27;
  FUNC_7("->non-boot console, using termno %d\n", VAR_28);
  if (VAR_28 < 0)
   return -VAR_0;
  VAR_25 = FUNC_5(sizeof(struct hvterm_priv), VAR_4);
  if (!VAR_25)
   return -VAR_1;
  VAR_25->termno = VAR_21->unit_address;
  VAR_25->proto = VAR_26;
  FUNC_9(&VAR_25->buf_lock);
  VAR_13[VAR_28] = VAR_25;
  FUNC_4(&VAR_25->hvsi, VAR_9, VAR_10,
        VAR_25->termno, 0);
 }

 VAR_24 = FUNC_3(VAR_28, VAR_21->irq, VAR_23, VAR_8);
 if (FUNC_0(VAR_24))
  return FUNC_1(VAR_24);
 FUNC_2(&VAR_21->dev, VAR_24);


 if (VAR_24->index == 0 && !VAR_20) {
  VAR_20 = VAR_19;
  VAR_15 = VAR_17;
  VAR_16 = VAR_18;
 }

 return 0;
}
