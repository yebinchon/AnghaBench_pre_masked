
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_eth {int dev; TYPE_1__* soc; } ;
struct TYPE_5__ {int cap_bit; int (* set_path ) (struct mtk_eth*,int) ;int name; } ;
struct TYPE_4__ {int caps; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mtk_eth*,int) ;

__attribute__((used)) static int FUNC_6(struct mtk_eth *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (!FUNC_1(VAR_3->soc->caps, VAR_4)) {
  FUNC_3(VAR_3->dev, "path %s isn't support on the SoC\n",
   FUNC_4(VAR_4));
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3->soc->caps, VAR_1))
  return 0;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (FUNC_1(VAR_3->soc->caps, VAR_2[VAR_5].cap_bit)) {
   VAR_6 = VAR_2[VAR_5].set_path(VAR_3, VAR_4);
   if (VAR_6)
    goto out;
  } else {
   FUNC_2(VAR_3->dev, "mux %s isn't present on the SoC\n",
    VAR_2[VAR_5].name);
  }
 }

out:
 return VAR_6;
}
