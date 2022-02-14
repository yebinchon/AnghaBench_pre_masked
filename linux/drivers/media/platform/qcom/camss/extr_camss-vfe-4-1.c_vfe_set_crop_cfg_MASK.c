
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_10__ {int left; int width; int top; int height; } ;
struct TYPE_6__ {scalar_t__ pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix_mp; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct TYPE_9__ {TYPE_3__ active_fmt; } ;
struct vfe_line {TYPE_5__ crop; TYPE_4__ video_out; } ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vfe_device *VAR_6, struct vfe_line *VAR_7)
{
 u32 VAR_8 = VAR_7->video_out.active_fmt.fmt.pix_mp.pixelformat;
 u32 VAR_9;
 u16 VAR_10, VAR_11;

 VAR_10 = VAR_7->crop.left;
 VAR_11 = VAR_7->crop.left + VAR_7->crop.width - 1;
 VAR_9 = (VAR_10 << 16) | VAR_11;
 FUNC_0(VAR_9, VAR_6->base + VAR_5);

 VAR_10 = VAR_7->crop.top;
 VAR_11 = VAR_7->crop.top + VAR_7->crop.height - 1;
 VAR_9 = (VAR_10 << 16) | VAR_11;
 FUNC_0(VAR_9, VAR_6->base + VAR_4);

 VAR_10 = VAR_7->crop.left / 2;
 VAR_11 = VAR_7->crop.left / 2 + VAR_7->crop.width / 2 - 1;
 VAR_9 = (VAR_10 << 16) | VAR_11;
 FUNC_0(VAR_9, VAR_6->base + VAR_3);

 VAR_10 = VAR_7->crop.top;
 VAR_11 = VAR_7->crop.top + VAR_7->crop.height - 1;
 if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
  VAR_10 = VAR_7->crop.top / 2;
  VAR_11 = VAR_7->crop.top / 2 + VAR_7->crop.height / 2 - 1;
 }
 VAR_9 = (VAR_10 << 16) | VAR_11;
 FUNC_0(VAR_9, VAR_6->base + VAR_2);
}
