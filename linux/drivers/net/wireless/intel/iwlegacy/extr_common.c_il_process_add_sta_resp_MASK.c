
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_9__ {int status; } ;
struct TYPE_10__ {TYPE_2__ add_sta; } ;
struct TYPE_8__ {int flags; } ;
struct il_rx_pkt {TYPE_3__ u; TYPE_1__ hdr; } ;
struct il_priv {int sta_lock; TYPE_6__* stations; } ;
struct TYPE_14__ {size_t sta_id; int addr; } ;
struct il_addsta_cmd {TYPE_7__ sta; } ;
struct TYPE_11__ {int addr; } ;
struct TYPE_12__ {scalar_t__ mode; TYPE_4__ sta; } ;
struct TYPE_13__ {TYPE_5__ sta; } ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct il_priv*,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_3, struct il_addsta_cmd *VAR_4,
   struct il_rx_pkt *VAR_5, bool VAR_6)
{
 u8 VAR_7 = VAR_4->sta.sta_id;
 unsigned long VAR_8;
 int VAR_9 = -VAR_0;

 if (VAR_5->hdr.flags & VAR_1) {
  FUNC_2("Bad return from C_ADD_STA (0x%08X)\n", VAR_5->hdr.flags);
  return VAR_9;
 }

 FUNC_1("Processing response for adding station %u\n", VAR_7);

 FUNC_4(&VAR_3->sta_lock, VAR_8);

 switch (VAR_5->u.add_sta.status) {
 case 128:
  FUNC_1("C_ADD_STA PASSED\n");
  FUNC_3(VAR_3, VAR_7);
  VAR_9 = 0;
  break;
 case 129:
  FUNC_2("Adding station %d failed, no room in table.\n", VAR_7);
  break;
 case 130:
  FUNC_2("Adding station %d failed, no block ack resource.\n",
         VAR_7);
  break;
 case 131:
  FUNC_2("Attempting to modify non-existing station %d\n",
         VAR_7);
  break;
 default:
  FUNC_0("Received C_ADD_STA:(0x%08X)\n", VAR_5->u.add_sta.status);
  break;
 }

 FUNC_1("%s station id %u addr %pM\n",
        VAR_3->stations[VAR_7].sta.mode ==
        VAR_2 ? "Modified" : "Added", VAR_7,
        VAR_3->stations[VAR_7].sta.sta.addr);
 FUNC_1("%s station according to cmd buffer %pM\n",
        VAR_3->stations[VAR_7].sta.mode ==
        VAR_2 ? "Modified" : "Added", VAR_4->sta.addr);
 FUNC_5(&VAR_3->sta_lock, VAR_8);

 return VAR_9;
}
