
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int revision_id; } ;
struct netxen_adapter {TYPE_2__* pdev; TYPE_1__ ahw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct netxen_adapter*,int ,int*) ;

int
FUNC_8(struct netxen_adapter *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_1(VAR_4->ahw.revision_id))
  return 0;

 if (FUNC_7(VAR_4,
   VAR_3, (int *)&VAR_5)) {
  FUNC_5(&VAR_4->pdev->dev, "Unable to read flash fw"
   "version\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_0(VAR_5);
 VAR_6 = VAR_2;
 if (VAR_5 >= VAR_6)
  return 0;

 FUNC_6(&VAR_4->pdev->dev, "Flash fw[%d.%d.%d] is < min fw supported"
  "[4.0.505]. Please update firmware on flash\n",
  FUNC_3(VAR_5), FUNC_4(VAR_5),
  FUNC_2(VAR_5));
 return -VAR_0;
}
