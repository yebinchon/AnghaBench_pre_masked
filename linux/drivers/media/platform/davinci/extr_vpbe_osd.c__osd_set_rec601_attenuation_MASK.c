
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int vpbe_type; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;




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
 int FUNC_0 (struct osd_state*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_10,
     enum osd_win_layer VAR_11, int VAR_12)
{
 switch (VAR_11) {
 case 129:
  FUNC_0(VAR_10, VAR_4,
     VAR_12 ? VAR_4 : 0,
     VAR_3);
  if (VAR_10->vpbe_type == VAR_7)
   FUNC_0(VAR_10, VAR_4,
      VAR_12 ? VAR_4 : 0,
      VAR_3);
  else if ((VAR_10->vpbe_type == VAR_9) ||
      (VAR_10->vpbe_type == VAR_8))
   FUNC_0(VAR_10, VAR_1,
      VAR_12 ? VAR_1 : 0,
      VAR_0);
  break;
 case 128:
  FUNC_0(VAR_10, VAR_6,
     VAR_12 ? VAR_6 : 0,
     VAR_5);
  if (VAR_10->vpbe_type == VAR_7)
   FUNC_0(VAR_10, VAR_6,
      VAR_12 ? VAR_6 : 0,
      VAR_5);
  else if ((VAR_10->vpbe_type == VAR_9) ||
      (VAR_10->vpbe_type == VAR_8))
   FUNC_0(VAR_10, VAR_2,
      VAR_12 ? VAR_2 : 0,
      VAR_0);
  break;
 }
}
