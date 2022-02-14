
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_endpt {size_t state; int sendlock; int remote_dev; } ;
typedef scalar_t__ scif_epd_t ;
struct TYPE_3__ {int this_device; } ;
struct TYPE_4__ {TYPE_1__ mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,void*,int,int) ;
 int FUNC_1 (int ,char*,struct scif_endpt*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (scalar_t__,int,int) ;

int FUNC_5(scif_epd_t VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
 struct scif_endpt *VAR_8 = (struct scif_endpt *)VAR_4;
 int VAR_9;

 FUNC_1(VAR_3.mdev.this_device,
  "SCIFAPI send (K): ep %p %s\n", VAR_8, VAR_2[VAR_8->state]);
 if (!VAR_6)
  return 0;

 VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;
 if (!VAR_8->remote_dev)
  return -VAR_0;






 if (VAR_7 & VAR_1)
  FUNC_2(&VAR_8->sendlock);

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_7 & VAR_1)
  FUNC_3(&VAR_8->sendlock);
 return VAR_9;
}
