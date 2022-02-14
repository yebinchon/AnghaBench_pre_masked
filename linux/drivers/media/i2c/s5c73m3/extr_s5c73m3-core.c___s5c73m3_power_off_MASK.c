
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5c73m3 {int clock; TYPE_1__* supplies; int oif_sd; scalar_t__ isp_ready; scalar_t__ streaming; } ;
struct TYPE_2__ {int supply; int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct s5c73m3*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct s5c73m3 *VAR_3)
{
 int VAR_4, VAR_5;

 if (FUNC_4(VAR_3, VAR_0))
  FUNC_5(10, 50);

 if (FUNC_4(VAR_3, VAR_2))
  FUNC_5(100, 200);

 FUNC_0(VAR_3->clock);

 VAR_3->streaming = 0;
 VAR_3->isp_ready = 0;

 for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_2(VAR_3->supplies[VAR_4].consumer);
  if (VAR_5)
   goto err;
 }

 return 0;
err:
 for (++VAR_4; VAR_4 < VAR_1; VAR_4++) {
  int VAR_6 = FUNC_3(VAR_3->supplies[VAR_4].consumer);
  if (VAR_6 < 0)
   FUNC_6(&VAR_3->oif_sd, "Failed to re-enable %s: %d\n",
     VAR_3->supplies[VAR_4].supply, VAR_6);
 }

 FUNC_1(VAR_3->clock);
 return VAR_5;
}
