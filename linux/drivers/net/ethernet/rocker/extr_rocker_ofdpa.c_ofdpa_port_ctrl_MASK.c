
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ofdpa_port {int vlan_bitmap; } ;
struct ofdpa_ctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ofdpa_port*,int,struct ofdpa_ctrl const*,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ofdpa_port *VAR_1, int VAR_2,
      const struct ofdpa_ctrl *VAR_3)
{
 u16 VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_2(VAR_4, VAR_1->vlan_bitmap))
   continue;
  VAR_5 = FUNC_1(VAR_1, VAR_2,
        VAR_3, FUNC_0(VAR_4));
  if (VAR_5)
   break;
 }

 return VAR_5;
}
