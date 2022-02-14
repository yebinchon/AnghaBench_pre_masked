
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int dummy; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_blending_factor { ____Placeholder_osd_blending_factor } osd_blending_factor ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct osd_state*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_6,
         enum osd_win_layer VAR_7,
         enum osd_blending_factor VAR_8)
{
 switch (VAR_7) {
 case 129:
  FUNC_0(VAR_6, VAR_1,
     VAR_8 << VAR_2, VAR_0);
  break;
 case 128:
  FUNC_0(VAR_6, VAR_4,
     VAR_8 << VAR_5, VAR_3);
  break;
 }
}
