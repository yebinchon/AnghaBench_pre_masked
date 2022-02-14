
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {struct uio_info* name; TYPE_1__* mem; int (* shutdown ) (struct uio_info*,int) ;struct uio_info* priv; } ;
struct platform_device {int dummy; } ;
struct fsl_elbc_gpcm {struct fsl_elbc_gpcm* name; TYPE_1__* mem; int (* shutdown ) (struct uio_info*,int) ;struct fsl_elbc_gpcm* priv; } ;
struct TYPE_2__ {struct uio_info* name; int internal_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uio_info*) ;
 struct uio_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct uio_info*,int) ;
 int FUNC_5 (struct uio_info*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct uio_info *VAR_1 = FUNC_2(VAR_0);
 struct fsl_elbc_gpcm *VAR_2 = VAR_1->priv;

 FUNC_3(VAR_0, ((void*)0));
 FUNC_5(VAR_1);
 if (VAR_2->shutdown)
  VAR_2->shutdown(VAR_1, 0);
 FUNC_0(VAR_1->mem[0].internal_addr);
 FUNC_1(VAR_1->mem[0].name);
 FUNC_1(VAR_1->name);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);

 return 0;

}
