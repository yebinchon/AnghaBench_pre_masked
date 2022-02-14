
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5c73m3 {TYPE_1__* supplies; int clock; int oif_sd; int mclk_frequency; } ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct s5c73m3*,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ,int *,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct s5c73m3 *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_4(VAR_4->supplies[VAR_5].consumer);
  if (VAR_6)
   goto err_reg_dis;
 }

 VAR_6 = FUNC_2(VAR_4->clock, VAR_4->mclk_frequency);
 if (VAR_6 < 0)
  goto err_reg_dis;

 VAR_6 = FUNC_1(VAR_4->clock);
 if (VAR_6 < 0)
  goto err_reg_dis;

 FUNC_7(1, VAR_3, &VAR_4->oif_sd, "clock frequency: %ld\n",
     FUNC_0(VAR_4->clock));

 FUNC_5(VAR_4, VAR_2);
 FUNC_6(100, 200);

 FUNC_5(VAR_4, VAR_0);
 FUNC_6(50, 100);

 return 0;

err_reg_dis:
 for (--VAR_5; VAR_5 >= 0; VAR_5--)
  FUNC_3(VAR_4->supplies[VAR_5].consumer);
 return VAR_6;
}
