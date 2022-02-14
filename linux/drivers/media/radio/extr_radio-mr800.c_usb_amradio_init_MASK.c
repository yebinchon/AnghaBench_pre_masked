
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct amradio_device {TYPE_1__ vdev; int curfreq; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct amradio_device*,int ) ;
 int FUNC_2 (struct amradio_device*,int) ;
 int FUNC_3 (struct amradio_device*,int) ;

__attribute__((used)) static int FUNC_4(struct amradio_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1)
  goto out_err;
 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1)
  goto out_err;
 VAR_1 = FUNC_1(VAR_0, VAR_0->curfreq);
 if (VAR_1)
  goto out_err;
 return 0;

out_err:
 FUNC_0(&VAR_0->vdev.dev, "initialization failed\n");
 return VAR_1;
}
