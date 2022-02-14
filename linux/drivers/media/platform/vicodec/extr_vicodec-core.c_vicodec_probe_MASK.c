
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* mdev; int release; } ;
struct TYPE_8__ {int m2m_dev; int vfd; } ;
struct TYPE_9__ {int * ops; int bus_info; int model; int * dev; } ;
struct vicodec_dev {TYPE_1__ v4l2_dev; TYPE_4__ stateful_enc; TYPE_4__ stateful_dec; TYPE_4__ stateless_dec; TYPE_5__ mdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vicodec_dev*) ;
 struct vicodec_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct platform_device*,struct vicodec_dev*) ;
 scalar_t__ FUNC_5 (struct vicodec_dev*,TYPE_4__*,char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct vicodec_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_7(&VAR_6->dev, &VAR_7->v4l2_dev);
 if (VAR_8)
  goto free_dev;

 VAR_7->v4l2_dev.release = VAR_5;
 FUNC_4(VAR_6, VAR_7);

 if (FUNC_5(VAR_7, &VAR_7->stateful_enc,
         "stateful-encoder", 1))
  goto unreg_dev;

 if (FUNC_5(VAR_7, &VAR_7->stateful_dec,
         "stateful-decoder", 0))
  goto unreg_sf_enc;

 if (FUNC_5(VAR_7, &VAR_7->stateless_dec,
         "stateless-decoder", 0))
  goto unreg_sf_dec;
 return 0;
unreg_sf_dec:
 FUNC_13(&VAR_7->stateful_dec.vfd);
 FUNC_11(VAR_7->stateful_dec.m2m_dev);
unreg_sf_enc:
 FUNC_13(&VAR_7->stateful_enc.vfd);
 FUNC_11(VAR_7->stateful_enc.m2m_dev);
unreg_dev:
 FUNC_8(&VAR_7->v4l2_dev);
free_dev:
 FUNC_0(VAR_7);

 return VAR_8;
}
