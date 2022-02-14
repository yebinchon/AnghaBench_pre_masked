
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_deb_pix_map {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; scalar_t__ field; int code; } ;
struct TYPE_2__ {scalar_t__ field; int code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*) ;
 struct vimc_deb_pix_map* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_mbus_framefmt *VAR_7)
{
 const struct vimc_deb_pix_map *VAR_8;


 VAR_8 = FUNC_2(VAR_7->code);
 if (!VAR_8)
  VAR_7->code = VAR_5.code;

 VAR_7->width = FUNC_0(VAR_6, VAR_7->width, VAR_4,
        VAR_2) & ~1;
 VAR_7->height = FUNC_0(VAR_6, VAR_7->height, VAR_3,
         VAR_1) & ~1;

 if (VAR_7->field == VAR_0)
  VAR_7->field = VAR_5.field;

 FUNC_1(VAR_7);
}
