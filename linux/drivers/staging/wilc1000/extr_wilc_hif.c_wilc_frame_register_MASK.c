
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wilc_vif {int ndev; } ;
struct wilc_reg_frame {int reg; int frame_type; int reg_id; } ;
struct wid {int size; int * val; int type; int id; } ;
typedef int reg_frame ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wilc_reg_frame*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wilc_vif*,int ,struct wid*,int) ;

void FUNC_4(struct wilc_vif *VAR_5, u16 VAR_6, bool VAR_7)
{
 struct wid VAR_8;
 int VAR_9;
 struct wilc_reg_frame VAR_10;

 VAR_8.id = VAR_0;
 VAR_8.type = VAR_1;
 VAR_8.size = sizeof(VAR_10);
 VAR_8.val = (u8 *)&VAR_10;

 FUNC_1(&VAR_10, 0x0, sizeof(VAR_10));
 VAR_10.reg = VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_10.reg_id = VAR_2;
  break;

 case 128:
  VAR_10.reg_id = VAR_3;
  break;

 default:
  break;
 }
 VAR_10.frame_type = FUNC_0(VAR_6);
 VAR_9 = FUNC_3(VAR_5, VAR_4, &VAR_8, 1);
 if (VAR_9)
  FUNC_2(VAR_5->ndev, "Failed to frame register\n");
}
