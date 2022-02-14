
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_sr {int ip_type; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* notify ) (struct omap_sr*,int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct omap_sr*,int ) ;
 int FUNC_2 (struct omap_sr*,int ,int ) ;
 int FUNC_3 (struct omap_sr*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct omap_sr *VAR_7 = VAR_6;
 u32 VAR_8 = 0;

 switch (VAR_7->ip_type) {
 case 129:

  VAR_8 = FUNC_1(VAR_7, VAR_0);


  FUNC_2(VAR_7, VAR_0, VAR_8);
  break;
 case 128:

  VAR_8 = FUNC_1(VAR_7, VAR_1);


  FUNC_2(VAR_7, VAR_1, VAR_8);
  break;
 default:
  FUNC_0(&VAR_7->pdev->dev, "UNKNOWN IP type %d\n",
   VAR_7->ip_type);
  return VAR_3;
 }

 if (VAR_4->notify)
  VAR_4->notify(VAR_7, VAR_8);

 return VAR_2;
}
