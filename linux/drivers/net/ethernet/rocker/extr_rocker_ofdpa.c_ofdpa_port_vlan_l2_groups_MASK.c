
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ofdpa_port {scalar_t__ stp_state; int dev; int vlan_bitmap; scalar_t__ pport; struct ofdpa* ofdpa; } ;
struct ofdpa {TYPE_1__* rocker; } ;
typedef int __be16 ;
struct TYPE_2__ {unsigned int port_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ofdpa_port*,int,int ,scalar_t__,int) ;
 struct ofdpa_port* FUNC_3 (struct ofdpa const*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_3, int VAR_4,
         __be16 VAR_5, bool VAR_6)
{
 const struct ofdpa *VAR_7 = VAR_3->ofdpa;
 unsigned int VAR_8 = VAR_7->rocker->port_count;
 struct ofdpa_port *VAR_9;
 bool VAR_10 = !(VAR_4 & VAR_2);
 u32 VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;





 if (VAR_3->stp_state == VAR_1 ||
     VAR_3->stp_state == VAR_0) {
  VAR_11 = VAR_3->pport;
  VAR_13 = FUNC_2(VAR_3, VAR_4,
            VAR_5, VAR_11, VAR_6);
  if (VAR_13) {
   FUNC_0(VAR_3->dev, "Error (%d) port VLAN l2 group for pport %d\n",
       VAR_13, VAR_11);
   return VAR_13;
  }
 }






 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_9 = FUNC_3(VAR_7, VAR_14);
  if (VAR_9 && FUNC_4(FUNC_1(VAR_5), VAR_9->vlan_bitmap))
   VAR_12++;
 }

 if ((!VAR_10 || VAR_12 != 1) && (VAR_10 || VAR_12 != 0))
  return 0;

 VAR_11 = 0;
 VAR_13 = FUNC_2(VAR_3, VAR_4,
           VAR_5, VAR_11, VAR_6);
 if (VAR_13) {
  FUNC_0(VAR_3->dev, "Error (%d) port VLAN l2 group for CPU port\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
