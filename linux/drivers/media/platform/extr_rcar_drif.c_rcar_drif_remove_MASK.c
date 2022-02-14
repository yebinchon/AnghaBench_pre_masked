
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_drif_sdr {int dummy; } ;
struct rcar_drif {scalar_t__ num; struct rcar_drif_sdr* sdr; } ;
struct platform_device {int dummy; } ;


 struct rcar_drif* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct rcar_drif_sdr*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rcar_drif *VAR_1 = FUNC_0(VAR_0);
 struct rcar_drif_sdr *VAR_2 = VAR_1->sdr;


 if (VAR_1->num)
  return 0;


 FUNC_1(VAR_2);

 return 0;
}
