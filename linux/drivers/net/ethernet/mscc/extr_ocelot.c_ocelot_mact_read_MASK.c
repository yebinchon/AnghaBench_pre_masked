
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocelot_port {int chip_port; struct ocelot* ocelot; } ;
struct ocelot_mact_entry {int vid; int mac; } ;
struct ocelot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ocelot*,int ,int) ;
 scalar_t__ FUNC_3 (struct ocelot*) ;
 int FUNC_4 (struct ocelot*,int ) ;
 int FUNC_5 (struct ocelot*,int ,int ) ;

__attribute__((used)) static inline int FUNC_6(struct ocelot_port *VAR_11, int VAR_12, int VAR_13,
       struct ocelot_mact_entry *VAR_14)
{
 struct ocelot *VAR_15 = VAR_11->ocelot;
 char VAR_16[VAR_8];
 u32 VAR_17, VAR_18, VAR_19, VAR_20;


 FUNC_2(VAR_15, VAR_6, VAR_12);
 FUNC_2(VAR_15, VAR_5, VAR_13);


 FUNC_5(VAR_15,
       FUNC_0(VAR_10),
       VAR_0);

 if (FUNC_3(VAR_15))
  return -VAR_9;


 VAR_17 = FUNC_4(VAR_15, VAR_0);
 if (!(VAR_17 & VAR_2))
  return -VAR_7;




 VAR_18 = (VAR_17 & VAR_1) >> 3;
 if (VAR_18 != VAR_11->chip_port)
  return -VAR_7;


 VAR_19 = FUNC_4(VAR_15, VAR_4);
 VAR_20 = FUNC_4(VAR_15, VAR_3);

 VAR_16[0] = (VAR_20 >> 8) & 0xff;
 VAR_16[1] = (VAR_20 >> 0) & 0xff;
 VAR_16[2] = (VAR_19 >> 24) & 0xff;
 VAR_16[3] = (VAR_19 >> 16) & 0xff;
 VAR_16[4] = (VAR_19 >> 8) & 0xff;
 VAR_16[5] = (VAR_19 >> 0) & 0xff;

 VAR_14->vid = (VAR_20 >> 16) & 0xfff;
 FUNC_1(VAR_14->mac, VAR_16);

 return 0;
}
