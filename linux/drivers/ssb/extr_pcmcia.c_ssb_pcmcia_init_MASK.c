
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_bus {scalar_t__ bustype; TYPE_1__* host_pcmcia; int sprom_mutex; int sprom_size; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ssb_bus*) ;

int FUNC_4(struct ssb_bus *VAR_3)
{
 int VAR_4;

 if (VAR_3->bustype != VAR_0)
  return 0;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto error;

 VAR_3->sprom_size = VAR_1;
 FUNC_1(&VAR_3->sprom_mutex);
 VAR_4 = FUNC_0(&VAR_3->host_pcmcia->dev, &VAR_2);
 if (VAR_4)
  goto error;

 return 0;
error:
 FUNC_2("Failed to initialize PCMCIA host device\n");
 return VAR_4;
}
