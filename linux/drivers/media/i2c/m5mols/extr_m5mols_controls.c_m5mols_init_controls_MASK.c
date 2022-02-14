
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {TYPE_2__* ctrl_handler; } ;
struct TYPE_10__ {int error; } ;
struct m5mols_info {TYPE_2__ handle; TYPE_7__* colorfx; TYPE_7__* auto_wb; TYPE_7__* auto_exposure; TYPE_1__* lock_3a; TYPE_7__* auto_iso; void* jpeg_quality; void* stabilization; void* wdr; void* zoom; void* saturation; void* iso; void* metering; void* exposure_bias; void* exposure; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_1 (struct m5mols_info*,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 struct m5mols_info* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,TYPE_7__**,int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 void* FUNC_8 (TYPE_2__*,int *,int ,int,int,int ) ;
 void* FUNC_9 (TYPE_2__*,int *,int ,int,int,int,int) ;
 void* FUNC_10 (TYPE_2__*,int *,int ,int,int,int) ;
 int FUNC_11 (struct v4l2_subdev*,char*,int) ;

int FUNC_12(struct v4l2_subdev *VAR_27)
{
 struct m5mols_info *VAR_28 = FUNC_4(VAR_27);
 u16 VAR_29;
 u16 VAR_30;
 int VAR_31;


 VAR_31 = FUNC_2(VAR_27, VAR_0, &VAR_29);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_30 = FUNC_1(VAR_28, VAR_3) ? 31 : 1;
 FUNC_7(&VAR_28->handle, 20);

 VAR_28->auto_wb = FUNC_10(&VAR_28->handle,
   &VAR_26, VAR_6,
   9, ~0x3fe, VAR_23);


 VAR_28->auto_exposure = FUNC_10(&VAR_28->handle,
   &VAR_26, VAR_9,
   1, ~0x03, VAR_21);

 VAR_28->exposure = FUNC_9(&VAR_28->handle,
   &VAR_26, VAR_8,
   0, VAR_29, 1, VAR_29 / 2);

 VAR_28->exposure_bias = FUNC_8(&VAR_28->handle,
   &VAR_26, VAR_5,
   FUNC_0(VAR_24) - 1,
   FUNC_0(VAR_24)/2 - 1,
   VAR_24);

 VAR_28->metering = FUNC_10(&VAR_28->handle,
   &VAR_26, VAR_10,
   2, ~0x7, VAR_22);


 VAR_28->auto_iso = FUNC_10(&VAR_28->handle, &VAR_26,
   VAR_13, 1, ~0x03, 1);

 VAR_28->iso = FUNC_8(&VAR_28->handle, &VAR_26,
   VAR_12, FUNC_0(VAR_25) - 1,
   FUNC_0(VAR_25)/2 - 1, VAR_25);

 VAR_28->saturation = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_15, 1, 5, 1, 3);

 VAR_28->zoom = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_17, 1, 70, VAR_30, 1);

 VAR_28->colorfx = FUNC_10(&VAR_28->handle, &VAR_26,
   VAR_7, 4, 0, VAR_18);

 VAR_28->wdr = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_16, 0, 1, 1, 0);

 VAR_28->stabilization = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_11, 0, 1, 1, 0);

 VAR_28->jpeg_quality = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_14, 1, 100, 1, 80);

 VAR_28->lock_3a = FUNC_9(&VAR_28->handle, &VAR_26,
   VAR_4, 0, 0x7, 0, 0);

 if (VAR_28->handle.error) {
  int VAR_32 = VAR_28->handle.error;
  FUNC_11(VAR_27, "Failed to initialize controls: %d\n", VAR_32);
  FUNC_6(&VAR_28->handle);
  return VAR_32;
 }

 FUNC_5(4, &VAR_28->auto_exposure, 1, 0);
 VAR_28->auto_iso->flags |= VAR_20 |
    VAR_19;
 FUNC_5(2, &VAR_28->auto_iso, 0, 0);

 VAR_28->lock_3a->flags |= VAR_20;

 FUNC_3(VAR_28->auto_exposure, VAR_2);
 FUNC_3(VAR_28->auto_wb, VAR_2);
 FUNC_3(VAR_28->colorfx, VAR_1);

 VAR_27->ctrl_handler = &VAR_28->handle;

 return 0;
}
