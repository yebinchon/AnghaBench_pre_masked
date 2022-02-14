
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix_mp; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct TYPE_8__ {TYPE_3__ active_fmt; } ;
struct vfe_line {TYPE_4__ video_out; } ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct vfe_device*,int ,scalar_t__) ;
 int FUNC_1 (struct vfe_device*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_10, struct vfe_line *VAR_11,
    u8 VAR_12)
{
 u32 VAR_13 = VAR_11->video_out.active_fmt.fmt.pix_mp.pixelformat;
 u32 VAR_14 = VAR_5;

 if (VAR_13 != VAR_2 && VAR_13 != VAR_3 &&
   VAR_13 != VAR_1 && VAR_13 != VAR_0)
  return;

 if (VAR_12) {
  FUNC_1(VAR_10, VAR_4, VAR_14);
 } else {
  FUNC_0(VAR_10, VAR_4, VAR_14);
  return;
 }

 VAR_14 = VAR_9;

 if (VAR_13 == VAR_0 || VAR_13 == VAR_2)
  VAR_14 |= VAR_8;
 else
  VAR_14 |= VAR_7;

 FUNC_2(VAR_14, VAR_10->base + VAR_6);
}
