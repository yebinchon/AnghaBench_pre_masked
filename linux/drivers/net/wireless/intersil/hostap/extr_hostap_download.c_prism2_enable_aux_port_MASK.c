
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int name; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {int cmdlock; scalar_t__ no_pri; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,char*,int ) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_17, int VAR_18)
{
 u16 VAR_19, VAR_20;
 int VAR_21, VAR_22;
 unsigned long VAR_23;
 struct hostap_interface *VAR_24;
 local_info_t *VAR_25;

 VAR_24 = FUNC_3(VAR_17);
 VAR_25 = VAR_24->local;

 if (VAR_25->no_pri) {
  if (VAR_18) {
   FUNC_2(VAR_0, "%s: no PRI f/w - assuming Aux "
          "port is already enabled\n", VAR_17->name);
  }
  return 0;
 }

 FUNC_5(&VAR_25->cmdlock, VAR_23);


 VAR_22 = VAR_11;
 while (FUNC_0(VAR_12) & VAR_10 && VAR_22 > 0) {
  VAR_22--;
  FUNC_7(1);
 }
 if (VAR_22 == 0) {
  VAR_20 = FUNC_0(VAR_12);
  FUNC_6(&VAR_25->cmdlock, VAR_23);
  FUNC_4("%s: prism2_enable_aux_port - timeout - reg=0x%04x\n",
         VAR_17->name, VAR_20);
  return -VAR_1;
 }

 VAR_19 = FUNC_0(VAR_13);

 if (VAR_18) {
  FUNC_1(VAR_2, VAR_14);
  FUNC_1(VAR_3, VAR_15);
  FUNC_1(VAR_4, VAR_16);

  if ((VAR_19 & VAR_9) != VAR_6)
   FUNC_4("prism2_enable_aux_port: was not disabled!?\n");
  VAR_19 &= ~VAR_9;
  VAR_19 |= VAR_7;
 } else {
  FUNC_1(0, VAR_14);
  FUNC_1(0, VAR_15);
  FUNC_1(0, VAR_16);

  if ((VAR_19 & VAR_9) != VAR_8)
   FUNC_4("prism2_enable_aux_port: was not enabled!?\n");
  VAR_19 &= ~VAR_9;
  VAR_19 |= VAR_5;
 }
 FUNC_1(VAR_19, VAR_13);

 FUNC_7(5);

 VAR_21 = 10000;
 while (VAR_21 > 0) {
  VAR_19 = FUNC_0(VAR_13);
  VAR_19 &= VAR_9;

  if ((VAR_18 && VAR_19 == VAR_8) ||
      (!VAR_18 && VAR_19 == VAR_6))
   break;

  FUNC_7(10);
  VAR_21--;
 }

 FUNC_6(&VAR_25->cmdlock, VAR_23);

 if (VAR_21 == 0) {
  FUNC_4("prism2_enable_aux_port(%d) timed out\n",
         VAR_18);
  return -VAR_1;
 }

 return 0;
}
