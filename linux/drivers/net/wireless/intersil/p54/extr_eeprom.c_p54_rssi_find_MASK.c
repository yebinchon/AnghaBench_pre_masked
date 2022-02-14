
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct p54_rssi_db_entry {scalar_t__ const freq; } ;
struct p54_common {TYPE_1__* rssi_db; } ;
struct TYPE_2__ {int entries; scalar_t__ offset; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 struct p54_rssi_db_entry VAR_0 ;
 int FUNC_1 (scalar_t__ const,scalar_t__ const) ;

struct p54_rssi_db_entry *FUNC_2(struct p54_common *VAR_1, const u16 VAR_2)
{
 struct p54_rssi_db_entry *VAR_3;
 int VAR_4, VAR_5 = -1;

 if (!VAR_1->rssi_db)
  return &VAR_0;

 VAR_3 = (void *)(VAR_1->rssi_db->data + VAR_1->rssi_db->offset);
 for (VAR_4 = 0; VAR_4 < VAR_1->rssi_db->entries; VAR_4++) {
  if (!FUNC_1(VAR_2, VAR_3[VAR_4].freq))
   continue;

  if (VAR_5 == -1) {
   VAR_5 = VAR_4;
   continue;
  }


  if (FUNC_0(VAR_2 - VAR_3[VAR_4].freq) <
      FUNC_0(VAR_2 - VAR_3[VAR_5].freq)) {
   VAR_5 = VAR_4;
   continue;
  } else {
   break;
  }
 }

 return VAR_5 < 0 ? &VAR_0 : &VAR_3[VAR_5];
}
