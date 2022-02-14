
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {scalar_t__ vpbe_type; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct osd_state*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_6,
       enum osd_layer VAR_7)
{







 if (VAR_6->vpbe_type == VAR_3) {
  if (VAR_7 == VAR_4)
   FUNC_0(VAR_6, VAR_1 | VAR_2,
      VAR_1, VAR_0);
  else if (VAR_7 == VAR_5)
   FUNC_0(VAR_6, VAR_1 | VAR_2,
      VAR_1 | VAR_2,
      VAR_0);
 }
}
