
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {int last_speed; int last_duplex; int link_up; int lmac_type; } ;
struct bgx_link_status {int speed; int duplex; int link_up; int mac_type; } ;
struct bgx {struct lmac* lmac; } ;


 struct bgx* FUNC_0 (int,int) ;

void FUNC_1(int VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 struct bgx_link_status *VAR_4 = (struct bgx_link_status *)VAR_3;
 struct bgx *VAR_5;
 struct lmac *VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_5)
  return;

 VAR_6 = &VAR_5->lmac[VAR_2];
 VAR_4->mac_type = VAR_6->lmac_type;
 VAR_4->link_up = VAR_6->link_up;
 VAR_4->duplex = VAR_6->last_duplex;
 VAR_4->speed = VAR_6->last_speed;
}
