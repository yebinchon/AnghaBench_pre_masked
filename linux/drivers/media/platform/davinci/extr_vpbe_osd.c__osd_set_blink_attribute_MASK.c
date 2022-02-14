
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct osd_state {int dummy; } ;
typedef enum osd_blink_interval { ____Placeholder_osd_blink_interval } osd_blink_interval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct osd_state*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_4, int VAR_5,
         enum osd_blink_interval VAR_6)
{
 u32 VAR_7 = 0;

 if (VAR_5) {
  VAR_7 |= VAR_1;
  VAR_7 |= VAR_6 << VAR_3;
 }

 FUNC_0(VAR_4, VAR_2 | VAR_1, VAR_7,
    VAR_0);
}
