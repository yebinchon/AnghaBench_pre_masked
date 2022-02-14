
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_media_pipe {int imgu_sd; } ;
struct imgu_device {TYPE_1__* pci_dev; struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct imgu_device*,int) ;
 int FUNC_2 (struct imgu_device*,int) ;
 int FUNC_3 (struct imgu_device*,int) ;
 int FUNC_4 (struct imgu_device*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct imgu_device *VAR_1)
{
 struct imgu_media_pipe *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->imgu_pipe[VAR_3];
  VAR_4 = FUNC_4(VAR_1, &VAR_2->imgu_sd, VAR_3);
  if (VAR_4) {
   FUNC_0(&VAR_1->pci_dev->dev,
    "failed to register subdev%u ret (%d)\n", VAR_3, VAR_4);
   goto pipes_cleanup;
  }
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4) {
   FUNC_3(VAR_1, VAR_3);
   goto pipes_cleanup;
  }
 }

 return 0;

pipes_cleanup:
 FUNC_1(VAR_1, VAR_3);
 return VAR_4;
}
