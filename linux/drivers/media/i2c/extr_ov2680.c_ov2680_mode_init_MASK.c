
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ov2680_mode_info {int dummy; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct TYPE_4__ {int width; int height; int colorspace; int field; int code; } ;
struct ov2680_dev {int mode_pending_changes; struct ov2680_mode_info const* current_mode; TYPE_1__ frame_interval; TYPE_2__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ov2680_mode_info VAR_4 ;

__attribute__((used)) static int FUNC_0(struct ov2680_dev *VAR_5)
{
 const struct ov2680_mode_info *VAR_6;


 VAR_5->fmt.code = VAR_0;
 VAR_5->fmt.width = 800;
 VAR_5->fmt.height = 600;
 VAR_5->fmt.field = VAR_3;
 VAR_5->fmt.colorspace = VAR_2;

 VAR_5->frame_interval.denominator = VAR_1;
 VAR_5->frame_interval.numerator = 1;

 VAR_6 = &VAR_4;

 VAR_5->current_mode = VAR_6;

 VAR_5->mode_pending_changes = 1;

 return 0;
}
