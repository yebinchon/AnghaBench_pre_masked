
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct device {int dummy; } ;
struct fsl_mc_device {int mc_io; int mc_handle; TYPE_1__ obj_desc; struct device dev; } ;
struct dpio_priv {int io; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 struct dpio_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (struct fsl_mc_device*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct fsl_mc_device *VAR_1)
{
 struct device *VAR_2;
 struct dpio_priv *VAR_3;
 int VAR_4 = 0, VAR_5;

 VAR_2 = &VAR_1->dev;
 VAR_3 = FUNC_2(VAR_2);
 VAR_5 = FUNC_4(VAR_3->io);

 FUNC_3(VAR_3->io);

 FUNC_8(VAR_1);

 FUNC_0(VAR_5, VAR_0);

 VAR_4 = FUNC_7(VAR_1->mc_io, 0, VAR_1->obj_desc.id,
   &VAR_1->mc_handle);
 if (VAR_4) {
  FUNC_1(VAR_2, "dpio_open() failed\n");
  goto err_open;
 }

 FUNC_6(VAR_1->mc_io, 0, VAR_1->mc_handle);

 FUNC_5(VAR_1->mc_io, 0, VAR_1->mc_handle);

 FUNC_9(VAR_1->mc_io);

 return 0;

err_open:
 FUNC_9(VAR_1->mc_io);

 return VAR_4;
}
