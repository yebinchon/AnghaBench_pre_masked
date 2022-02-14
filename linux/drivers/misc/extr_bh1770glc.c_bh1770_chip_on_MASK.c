
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {scalar_t__ lux_thres_lo_onchip; int lux_thres_hi_onchip; int client; scalar_t__ prox_data; scalar_t__ lux_data_raw; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bh1770_chip *VAR_6)
{
 int VAR_7 = FUNC_2(FUNC_0(VAR_6->regs),
     VAR_6->regs);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_4, VAR_4 * 2);


 FUNC_1(VAR_6->client, VAR_0,
    VAR_5);
 FUNC_3(VAR_2, VAR_2 * 2);






 VAR_6->lux_data_raw = 0;
 VAR_6->prox_data = 0;
 VAR_7 = FUNC_1(VAR_6->client,
     VAR_0, VAR_3);


 VAR_6->lux_thres_hi_onchip = VAR_1;
 VAR_6->lux_thres_lo_onchip = 0;

 return VAR_7;
}
