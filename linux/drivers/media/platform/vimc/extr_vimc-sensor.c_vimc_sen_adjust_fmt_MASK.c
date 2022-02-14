
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_pix_map {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; scalar_t__ field; int code; } ;
struct TYPE_2__ {scalar_t__ field; int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*) ;
 struct vimc_pix_map* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_mbus_framefmt *VAR_8)
{
 const struct vimc_pix_map *VAR_9;


 VAR_9 = FUNC_2(VAR_8->code);
 if (!VAR_9)
  VAR_8->code = VAR_6.code;

 VAR_8->width = FUNC_0(VAR_7, VAR_8->width, VAR_5,
        VAR_3) & ~1;
 VAR_8->height = FUNC_0(VAR_7, VAR_8->height, VAR_4,
         VAR_2) & ~1;


 if (VAR_8->field == VAR_1 || VAR_8->field == VAR_0)
  VAR_8->field = VAR_6.field;

 FUNC_1(VAR_8);
}
