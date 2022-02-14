
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_endpt {size_t state; int recvlock; } ;
typedef scalar_t__ scif_epd_t ;
struct TYPE_3__ {int this_device; } ;
struct TYPE_4__ {TYPE_1__ mdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,int,int) ;
 int FUNC_1 (int ,char*,struct scif_endpt*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (scalar_t__,int,int) ;

int FUNC_5(scif_epd_t VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct scif_endpt *VAR_7 = (struct scif_endpt *)VAR_3;
 int VAR_8;

 FUNC_1(VAR_2.mdev.this_device,
  "SCIFAPI recv (K): ep %p %s\n", VAR_7, VAR_1[VAR_7->state]);
 if (!VAR_5)
  return 0;

 VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;






 if (VAR_6 & VAR_0)
  FUNC_2(&VAR_7->recvlock);

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_6 & VAR_0)
  FUNC_3(&VAR_7->recvlock);

 return VAR_8;
}
