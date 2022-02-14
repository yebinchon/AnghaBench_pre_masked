
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct osd_state {int dummy; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_clut { ____Placeholder_osd_clut } osd_clut ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct osd_state*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_5,
         enum osd_win_layer VAR_6,
         enum osd_clut VAR_7)
{
 u32 VAR_8 = 0;

 switch (VAR_6) {
 case 129:
  if (VAR_7 == VAR_4)
   VAR_8 |= VAR_1;
  FUNC_0(VAR_5, VAR_1, VAR_8, VAR_0);
  break;
 case 128:
  if (VAR_7 == VAR_4)
   VAR_8 |= VAR_3;
  FUNC_0(VAR_5, VAR_3, VAR_8, VAR_2);
  break;
 }
}
