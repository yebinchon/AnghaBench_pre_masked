
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imxdi_dev {int dsr; int write_mutex; TYPE_1__* pdev; int write_wait; scalar_t__ ioaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct imxdi_dev*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct imxdi_dev*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct imxdi_dev *VAR_4, u32 VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;


 FUNC_4(&VAR_4->write_mutex);


 FUNC_2(VAR_4, VAR_0);

 VAR_4->dsr = 0;


 FUNC_7(VAR_5, VAR_4->ioaddr + VAR_6);


 VAR_7 = FUNC_6(VAR_4->write_wait,
   VAR_4->dsr & (VAR_1 | VAR_2), FUNC_3(1));
 if (VAR_7 < 0) {
  VAR_8 = VAR_7;
  goto out;
 } else if (VAR_7 == 0) {
  FUNC_1(&VAR_4->pdev->dev,
    "Write-wait timeout "
    "val = 0x%08x reg = 0x%08x\n", VAR_5, VAR_6);
 }


 if (VAR_4->dsr & VAR_2) {
  FUNC_0(VAR_4);
  VAR_8 = -VAR_3;
 }

out:
 FUNC_5(&VAR_4->write_mutex);

 return VAR_8;
}
