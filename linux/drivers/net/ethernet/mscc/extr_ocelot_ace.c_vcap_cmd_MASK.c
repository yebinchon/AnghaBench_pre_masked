
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ocelot {int dummy; } ;
struct TYPE_2__ {scalar_t__ entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ocelot*,int,int ) ;
 int FUNC_3 (int ,struct ocelot*,int,int,int,int) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(struct ocelot *VAR_10, u16 VAR_11, int VAR_12, int VAR_13)
{
 u32 VAR_14 = (FUNC_1(VAR_12) |
       FUNC_0(VAR_11) |
       VAR_4);

 if ((VAR_13 & VAR_7) && VAR_11 >= VAR_8)
  return;

 if (!(VAR_13 & VAR_7))
  VAR_14 |= VAR_3;

 if (!(VAR_13 & VAR_5))
  VAR_14 |= VAR_1;

 if (!(VAR_13 & VAR_6))
  VAR_14 |= VAR_2;

 FUNC_2(VAR_10, VAR_14, VAR_0);
 FUNC_3(VAR_9, VAR_10, VAR_14,
    (VAR_14 & VAR_4) == 0,
    10, 100000);
}
