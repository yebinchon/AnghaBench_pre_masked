
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mt7601u_rate_power {TYPE_2__* ht; TYPE_2__* ofdm; TYPE_2__* cck; } ;
struct mt7601u_dev {TYPE_1__* ee; } ;
typedef int s8 ;
struct TYPE_4__ {int bw20; } ;
struct TYPE_3__ {int * real_cck_bw20; struct mt7601u_rate_power power_rate_table; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mt7601u_dev *VAR_0, s8 VAR_1, u32 VAR_2, int VAR_3)
{
 struct mt7601u_rate_power *VAR_4 = &VAR_0->ee->power_rate_table;

 switch (VAR_3) {
 case 0:
  FUNC_0(&VAR_4->cck[0], VAR_1, (VAR_2 >> 0) & 0xff);
  FUNC_0(&VAR_4->cck[1], VAR_1, (VAR_2 >> 8) & 0xff);

  VAR_0->ee->real_cck_bw20[0] = VAR_4->cck[0].bw20;
  VAR_0->ee->real_cck_bw20[1] = VAR_4->cck[1].bw20;

  FUNC_0(&VAR_4->ofdm[0], VAR_1, (VAR_2 >> 16) & 0xff);
  FUNC_0(&VAR_4->ofdm[1], VAR_1, (VAR_2 >> 24) & 0xff);
  break;
 case 1:
  FUNC_0(&VAR_4->ofdm[2], VAR_1, (VAR_2 >> 0) & 0xff);
  FUNC_0(&VAR_4->ofdm[3], VAR_1, (VAR_2 >> 8) & 0xff);
  FUNC_0(&VAR_4->ht[0], VAR_1, (VAR_2 >> 16) & 0xff);
  FUNC_0(&VAR_4->ht[1], VAR_1, (VAR_2 >> 24) & 0xff);
  break;
 case 2:
  FUNC_0(&VAR_4->ht[2], VAR_1, (VAR_2 >> 0) & 0xff);
  FUNC_0(&VAR_4->ht[3], VAR_1, (VAR_2 >> 8) & 0xff);
  break;
 }
}
