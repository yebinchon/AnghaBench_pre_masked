
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct bh1770_chip {int lux_thres_hi_onchip; int lux_thres_lo_onchip; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bh1770_chip*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct bh1770_chip *VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 u8 VAR_5[4];
 int VAR_6;


 if (FUNC_3(&VAR_2->client->dev))
  return 0;






 if (VAR_3 != VAR_1 && VAR_3 != 0)
  VAR_3 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 != VAR_1 && VAR_4 != 0)
  VAR_4 = FUNC_1(VAR_2, VAR_4);

 if (VAR_2->lux_thres_hi_onchip == VAR_3 &&
     VAR_2->lux_thres_lo_onchip == VAR_4)
  return 0;

 VAR_2->lux_thres_hi_onchip = VAR_3;
 VAR_2->lux_thres_lo_onchip = VAR_4;

 VAR_5[0] = VAR_3;
 VAR_5[1] = VAR_3 >> 8;
 VAR_5[2] = VAR_4;
 VAR_5[3] = VAR_4 >> 8;

 VAR_6 = FUNC_2(VAR_2->client,
     VAR_0,
     FUNC_0(VAR_5),
     VAR_5);
 return VAR_6;
}
