
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct lmac {int link_up; int last_duplex; int last_link; int dwork; int check_link; void* last_speed; int lmacid; int bgx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct lmac*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct lmac *VAR_10)
{
 u64 VAR_11, VAR_12;
 u8 VAR_13;

 VAR_11 = FUNC_1(VAR_10->bgx, VAR_10->lmacid,
    VAR_1);


 if (!(VAR_11 & VAR_5))
  VAR_11 = FUNC_1(VAR_10->bgx, VAR_10->lmacid,
     VAR_1);

 if (FUNC_0(VAR_10->bgx, VAR_10->lmacid, VAR_1,
    VAR_4, 0)) {
  VAR_10->link_up = 0;
  VAR_10->last_speed = VAR_9;
  VAR_10->last_duplex = VAR_2;
  goto next_poll;
 }

 VAR_10->link_up = ((VAR_11 & VAR_5) != 0) ? 1 : 0;
 VAR_12 = FUNC_1(VAR_10->bgx, VAR_10->lmacid,
     VAR_0);

 VAR_13 = (VAR_12 >> 3) & 0x3;
 VAR_10->last_duplex = (VAR_12 >> 1) & 0x1;
 switch (VAR_13) {
 case 0:
  VAR_10->last_speed = VAR_6;
  break;
 case 1:
  VAR_10->last_speed = VAR_7;
  break;
 case 2:
  VAR_10->last_speed = VAR_8;
  break;
 default:
  VAR_10->link_up = 0;
  VAR_10->last_speed = VAR_9;
  VAR_10->last_duplex = VAR_2;
  break;
 }

next_poll:

 if (VAR_10->last_link != VAR_10->link_up) {
  if (VAR_10->link_up)
   FUNC_2(VAR_10);
  VAR_10->last_link = VAR_10->link_up;
 }

 FUNC_3(VAR_10->check_link, &VAR_10->dwork, VAR_3 * 3);
}
