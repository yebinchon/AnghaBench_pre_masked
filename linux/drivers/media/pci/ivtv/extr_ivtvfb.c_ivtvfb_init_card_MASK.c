
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct osd_info {int dummy; } ;
struct ivtv {int v4l2_cap; TYPE_2__* streams; int ivtvfb_restore; TYPE_3__* osd_info; int osd_video_pbase; } ;
struct TYPE_6__ {int ivtvfb_info; int video_pbase; } ;
struct TYPE_4__ {int device_caps; } ;
struct TYPE_5__ {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ivtv*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;
 int VAR_12 ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct ivtv *VAR_13)
{
 int VAR_14;
 if (VAR_13->osd_info) {
  FUNC_0("Card %d already initialised\n", VAR_10);
  return -VAR_0;
 }

 VAR_13->osd_info = FUNC_7(sizeof(struct osd_info),
     VAR_5|VAR_9);
 if (VAR_13->osd_info == ((void*)0)) {
  FUNC_0("Failed to allocate memory for osd_info\n");
  return -VAR_3;
 }


 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14) {
  FUNC_5(VAR_13);
  return VAR_14;
 }


 if ((VAR_14 = FUNC_4(VAR_13))) {
  FUNC_5(VAR_13);
  return VAR_14;
 }


 if (FUNC_11(&VAR_13->osd_info->ivtvfb_info) < 0) {
  FUNC_5(VAR_13);
  return -VAR_1;
 }

 VAR_13->osd_video_pbase = VAR_13->osd_info->video_pbase;


 FUNC_6(&VAR_13->osd_info->ivtvfb_info);


 FUNC_12(0, 0x02a30);
 FUNC_12(0, 0x02a34);


 FUNC_2(VAR_4, &VAR_13->osd_info->ivtvfb_info);


 VAR_13->ivtvfb_restore = VAR_12;


 FUNC_1(VAR_13);
 VAR_13->streams[VAR_7].vdev.device_caps |=
  VAR_8;
 VAR_13->streams[VAR_6].vdev.device_caps |=
  VAR_8;
 VAR_13->v4l2_cap |= VAR_8;
 return 0;

}
