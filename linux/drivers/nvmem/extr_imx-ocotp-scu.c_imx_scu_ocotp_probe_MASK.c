
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ocotp_priv {TYPE_1__* data; struct device* dev; int nvmem_ipc; } ;
struct nvmem_device {int dummy; } ;
struct TYPE_5__ {int size; struct ocotp_priv* priv; struct device* dev; } ;
struct TYPE_4__ {int nregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvmem_device*) ;
 struct ocotp_priv* FUNC_1 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_2 (struct device*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct ocotp_priv *VAR_5;
 struct nvmem_device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_5->nvmem_ipc);
 if (VAR_7)
  return VAR_7;

 VAR_5->data = FUNC_4(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_2.size = 4 * VAR_5->data->nregs;
 VAR_2.dev = VAR_4;
 VAR_2.priv = VAR_5;
 VAR_6 = FUNC_2(VAR_4, &VAR_2);

 return FUNC_0(VAR_6);
}
