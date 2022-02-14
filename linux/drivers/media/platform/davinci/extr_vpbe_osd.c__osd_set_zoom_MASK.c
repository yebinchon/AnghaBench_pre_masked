
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct osd_state {int dummy; } ;
typedef enum osd_zoom_factor { ____Placeholder_osd_zoom_factor } osd_zoom_factor ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int FUNC_0 (struct osd_state*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_19, enum osd_layer VAR_20,
     enum osd_zoom_factor VAR_21,
     enum osd_zoom_factor VAR_22)
{
 u32 VAR_23 = 0;

 switch (VAR_20) {
 case 131:
  VAR_23 |= (VAR_21 << VAR_2);
  VAR_23 |= (VAR_22 << VAR_4);
  FUNC_0(VAR_19, VAR_1 | VAR_3, VAR_23,
     VAR_0);
  break;
 case 129:
  VAR_23 |= (VAR_21 << VAR_12);
  VAR_23 |= (VAR_22 << VAR_16);
  FUNC_0(VAR_19, VAR_11 | VAR_15, VAR_23,
     VAR_10);
  break;
 case 130:
  VAR_23 |= (VAR_21 << VAR_7);
  VAR_23 |= (VAR_22 << VAR_9);
  FUNC_0(VAR_19, VAR_6 | VAR_8, VAR_23,
     VAR_5);
  break;
 case 128:
  VAR_23 |= (VAR_21 << VAR_14);
  VAR_23 |= (VAR_22 << VAR_18);
  FUNC_0(VAR_19, VAR_13 | VAR_17, VAR_23,
     VAR_10);
  break;
 }
}
