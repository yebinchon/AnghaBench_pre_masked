
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ofdpa_port {scalar_t__ stp_state; int dev; int vlan_bitmap; int pport; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct ofdpa_port*,int,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_4, int VAR_5)
{
 bool VAR_6;
 u32 VAR_7;
 __be16 VAR_8;
 u16 VAR_9;
 int VAR_10;
 if (VAR_4->stp_state != VAR_1 &&
     VAR_4->stp_state != VAR_0)
  VAR_5 |= VAR_2;

 VAR_7 = VAR_4->pport;
 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  if (!FUNC_4(VAR_9, VAR_4->vlan_bitmap))
   continue;
  VAR_8 = FUNC_0(VAR_9);
  VAR_6 = FUNC_3(VAR_8);
  VAR_10 = FUNC_2(VAR_4, VAR_5,
            VAR_8, VAR_7, VAR_6);
  if (VAR_10) {
   FUNC_1(VAR_4->dev, "Error (%d) port VLAN l2 group for pport %d\n",
       VAR_10, VAR_7);
   return VAR_10;
  }
 }

 return 0;
}
