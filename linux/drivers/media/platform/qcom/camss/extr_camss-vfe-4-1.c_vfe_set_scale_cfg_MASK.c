
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {int width; int height; } ;
struct TYPE_7__ {int pixelformat; } ;
struct TYPE_8__ {TYPE_1__ pix_mp; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct TYPE_10__ {TYPE_3__ active_fmt; } ;
struct vfe_line {TYPE_6__ compose; TYPE_5__* fmt; TYPE_4__ video_out; } ;
struct vfe_device {scalar_t__ base; } ;
struct TYPE_11__ {int width; int height; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_13, struct vfe_line *VAR_14)
{
 u32 VAR_15 = VAR_14->video_out.active_fmt.fmt.pix_mp.pixelformat;
 u32 VAR_16;
 u16 VAR_17, VAR_18;
 u8 VAR_19;
 u32 VAR_20;

 FUNC_1(0x3, VAR_13->base + VAR_8);

 VAR_17 = VAR_14->fmt[VAR_0].width;
 VAR_18 = VAR_14->compose.width;
 VAR_16 = (VAR_18 << 16) | VAR_17;
 FUNC_1(VAR_16, VAR_13->base + VAR_9);

 VAR_19 = FUNC_0(VAR_17, VAR_18);
 VAR_20 = VAR_17 * (1 << (13 + VAR_19)) / VAR_18;
 VAR_16 = (VAR_19 << 20) | VAR_20;
 FUNC_1(VAR_16, VAR_13->base + VAR_10);

 VAR_17 = VAR_14->fmt[VAR_0].height;
 VAR_18 = VAR_14->compose.height;
 VAR_16 = (VAR_18 << 16) | VAR_17;
 FUNC_1(VAR_16, VAR_13->base + VAR_11);

 VAR_19 = FUNC_0(VAR_17, VAR_18);
 VAR_20 = VAR_17 * (1 << (13 + VAR_19)) / VAR_18;
 VAR_16 = (VAR_19 << 20) | VAR_20;
 FUNC_1(VAR_16, VAR_13->base + VAR_12);

 FUNC_1(0x3, VAR_13->base + VAR_3);

 VAR_17 = VAR_14->fmt[VAR_0].width;
 VAR_18 = VAR_14->compose.width / 2;
 VAR_16 = (VAR_18 << 16) | VAR_17;
 FUNC_1(VAR_16, VAR_13->base + VAR_4);

 VAR_19 = FUNC_0(VAR_17, VAR_18);
 VAR_20 = VAR_17 * (1 << (13 + VAR_19)) / VAR_18;
 VAR_16 = (VAR_19 << 20) | VAR_20;
 FUNC_1(VAR_16, VAR_13->base + VAR_5);

 VAR_17 = VAR_14->fmt[VAR_0].height;
 VAR_18 = VAR_14->compose.height;
 if (VAR_15 == VAR_1 || VAR_15 == VAR_2)
  VAR_18 = VAR_14->compose.height / 2;
 VAR_16 = (VAR_18 << 16) | VAR_17;
 FUNC_1(VAR_16, VAR_13->base + VAR_6);

 VAR_19 = FUNC_0(VAR_17, VAR_18);
 VAR_20 = VAR_17 * (1 << (13 + VAR_19)) / VAR_18;
 VAR_16 = (VAR_19 << 20) | VAR_20;
 FUNC_1(VAR_16, VAR_13->base + VAR_7);
}
