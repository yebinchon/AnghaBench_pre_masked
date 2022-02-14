
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ofdpa_port {int dev; int pport; int vlan_bitmap; struct ofdpa* ofdpa; } ;
struct ofdpa {TYPE_1__* rocker; } ;
typedef int __be16 ;
struct TYPE_2__ {unsigned int port_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ofdpa_port*,int,int ,scalar_t__,int *,int ) ;
 struct ofdpa_port* FUNC_7 (struct ofdpa const*,int) ;
 int FUNC_8 (struct ofdpa_port*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct ofdpa_port *VAR_2,
           int VAR_3, __be16 VAR_4)
{
 struct ofdpa_port *VAR_5;
 const struct ofdpa *VAR_6 = VAR_2->ofdpa;
 unsigned int VAR_7 = VAR_6->rocker->port_count;
 u32 VAR_8 = FUNC_0(VAR_4, 0);
 u32 *VAR_9;
 u8 VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_2(VAR_7, sizeof(u32), VAR_1);
 if (!VAR_9)
  return -VAR_0;






 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_5 = FUNC_7(VAR_6, VAR_12);
  if (!VAR_5)
   continue;
  if (!FUNC_8(VAR_5))
   continue;
  if (FUNC_9(FUNC_5(VAR_4), VAR_5->vlan_bitmap)) {
   VAR_9[VAR_10++] =
    FUNC_1(VAR_4, VAR_5->pport);
  }
 }


 if (VAR_10 == 0)
  goto no_ports_in_vlan;

 VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_4,
       VAR_10, VAR_9, VAR_8);
 if (VAR_11)
  FUNC_4(VAR_2->dev, "Error (%d) port VLAN l2 flood group\n", VAR_11);

no_ports_in_vlan:
 FUNC_3(VAR_9);
 return VAR_11;
}
