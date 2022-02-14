
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_station_entry {int mac_addr; scalar_t__ support_mode; scalar_t__ reserved; } ;
struct ipw_priv {int num_stations; int config; int * stations; scalar_t__ missed_adhoc_beacons; } ;
typedef int entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (struct ipw_priv*,scalar_t__,struct ipw_station_entry*,int) ;
 int FUNC_3 (int ,int*,int ) ;

__attribute__((used)) static u8 FUNC_4(struct ipw_priv *VAR_6, u8 * VAR_7)
{
 struct ipw_station_entry VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_stations; VAR_9++) {
  if (FUNC_1(VAR_6->stations[VAR_9], VAR_7)) {

   VAR_6->missed_adhoc_beacons = 0;
   if (!(VAR_6->config & VAR_1))

    VAR_6->config &= ~VAR_0;

   return VAR_9;
  }
 }

 if (VAR_9 == VAR_5)
  return VAR_3;

 FUNC_0("Adding AdHoc station: %pM\n", VAR_7);

 VAR_8.reserved = 0;
 VAR_8.support_mode = 0;
 FUNC_3(VAR_8.mac_addr, VAR_7, VAR_2);
 FUNC_3(VAR_6->stations[VAR_9], VAR_7, VAR_2);
 FUNC_2(VAR_6, VAR_4 + VAR_9 * sizeof(VAR_8),
    &VAR_8, sizeof(VAR_8));
 VAR_6->num_stations++;

 return VAR_9;
}
