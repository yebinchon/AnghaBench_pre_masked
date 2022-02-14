
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt7601u_rate_power {TYPE_1__* cck; } ;
struct mt7601u_dev {scalar_t__ bw; TYPE_2__* ee; } ;
struct TYPE_4__ {scalar_t__* real_cck_bw20; struct mt7601u_rate_power power_rate_table; } ;
struct TYPE_3__ {scalar_t__ bw20; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*,int,int,int ) ;
 int FUNC_1 (struct mt7601u_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mt7601u_dev *VAR_1, int VAR_2)
{
 struct mt7601u_rate_power *VAR_3 = &VAR_1->ee->power_rate_table;

 if (VAR_2 != 14 || VAR_1->bw != VAR_0) {
  FUNC_0(VAR_1, 4, 0x20, 0);
  FUNC_1(VAR_1, 178, 0xff);

  VAR_3->cck[0].bw20 = VAR_1->ee->real_cck_bw20[0];
  VAR_3->cck[1].bw20 = VAR_1->ee->real_cck_bw20[1];
 } else {
  FUNC_1(VAR_1, 4, 0x60);
  FUNC_1(VAR_1, 178, 0);


  VAR_3->cck[0].bw20 = VAR_1->ee->real_cck_bw20[0] - 2;
  VAR_3->cck[1].bw20 = VAR_1->ee->real_cck_bw20[1] - 2;
 }
}
