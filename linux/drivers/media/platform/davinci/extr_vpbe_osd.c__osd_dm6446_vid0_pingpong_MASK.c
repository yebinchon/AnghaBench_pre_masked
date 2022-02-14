
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {TYPE_1__* dev; } ;
struct osd_platform_data {scalar_t__ field_inv_wa_enable; } ;
struct osd_layer_config {unsigned long line_length; int interlaced; } ;
struct TYPE_2__ {scalar_t__ platform_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct osd_state*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (struct osd_state*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct osd_state *VAR_5,
         int VAR_6,
         unsigned long VAR_7,
         const struct osd_layer_config *VAR_8)
{
 struct osd_platform_data *VAR_9;

 VAR_9 = (struct osd_platform_data *)VAR_5->dev->platform_data;
 if (VAR_9 != ((void*)0) && VAR_9->field_inv_wa_enable) {

  if (!VAR_6 || !VAR_8->interlaced) {
   FUNC_1(VAR_5, VAR_7 & ~0x1F, VAR_4);
   FUNC_1(VAR_5, VAR_7 & ~0x1F, VAR_3);
   FUNC_0(VAR_5, VAR_2 | VAR_1, 0,
       VAR_0);
   return 0;
  } else {
   unsigned VAR_10 = VAR_1;

   FUNC_1(VAR_5,
    (VAR_7 & ~0x1F) - VAR_8->line_length,
    VAR_4);
   FUNC_1(VAR_5,
    (VAR_7 & ~0x1F) + VAR_8->line_length,
    VAR_3);
   FUNC_0(VAR_5,
    VAR_2 | VAR_1, VAR_10,
    VAR_0);

   return 1;
  }
 }

 return 0;
}
