
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long u8 ;
typedef long long u32 ;
typedef long long u16 ;
struct mwifiex_private {scalar_t__ adapter; } ;
struct mwifiex_debug_info {int tx_tbl_num; int rx_tbl_num; int tdls_peer_num; TYPE_3__* tdls_list; TYPE_2__* rx_tbl; TYPE_1__* tx_tbl; } ;
struct mwifiex_debug_data {char* name; size_t size; size_t num; size_t addr; } ;
struct TYPE_6__ {int peer_addr; } ;
struct TYPE_5__ {int tid; int start_win; int win_size; scalar_t__* buffer; int ta; } ;
struct TYPE_4__ {int tid; int ra; } ;


 long FUNC_0 (long long*) ;
 struct mwifiex_debug_data* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,...) ;

int FUNC_2(struct mwifiex_private *VAR_2, char *VAR_3,
     struct mwifiex_debug_info *VAR_4)
{
 char *VAR_5 = VAR_3;
 struct mwifiex_debug_data *VAR_6 = &VAR_0[0];
 size_t VAR_7, VAR_8;
 long VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_4)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_5 += FUNC_1(VAR_5, "%s=", VAR_6[VAR_10].name);

  VAR_7 = VAR_6[VAR_10].size / VAR_6[VAR_10].num;

  if (VAR_10 < (VAR_1 - 3))
   VAR_8 = VAR_6[VAR_10].addr + (size_t)VAR_4;
  else
   VAR_8 = VAR_6[VAR_10].addr + (size_t)VAR_2->adapter;

  for (VAR_11 = 0; VAR_11 < VAR_6[VAR_10].num; VAR_11++) {
   switch (VAR_7) {
   case 1:
    VAR_9 = *((u8 *)VAR_8);
    break;
   case 2:
    VAR_9 = FUNC_0((u16 *)VAR_8);
    break;
   case 4:
    VAR_9 = FUNC_0((u32 *)VAR_8);
    break;
   case 8:
    VAR_9 = FUNC_0((long long *)VAR_8);
    break;
   default:
    VAR_9 = -1;
    break;
   }

   VAR_5 += FUNC_1(VAR_5, "%#lx ", VAR_9);
   VAR_8 += VAR_7;
  }

  VAR_5 += FUNC_1(VAR_5, "\n");
 }

 if (VAR_4->tx_tbl_num) {
  VAR_5 += FUNC_1(VAR_5, "Tx BA stream table:\n");
  for (VAR_10 = 0; VAR_10 < VAR_4->tx_tbl_num; VAR_10++)
   VAR_5 += FUNC_1(VAR_5, "tid = %d, ra = %pM\n",
         VAR_4->tx_tbl[VAR_10].tid, VAR_4->tx_tbl[VAR_10].ra);
 }

 if (VAR_4->rx_tbl_num) {
  VAR_5 += FUNC_1(VAR_5, "Rx reorder table:\n");
  for (VAR_10 = 0; VAR_10 < VAR_4->rx_tbl_num; VAR_10++) {
   VAR_5 += FUNC_1(VAR_5, "tid = %d, ta = %pM, ",
         VAR_4->rx_tbl[VAR_10].tid,
         VAR_4->rx_tbl[VAR_10].ta);
   VAR_5 += FUNC_1(VAR_5, "start_win = %d, ",
         VAR_4->rx_tbl[VAR_10].start_win);
   VAR_5 += FUNC_1(VAR_5, "win_size = %d, buffer: ",
         VAR_4->rx_tbl[VAR_10].win_size);

   for (VAR_11 = 0; VAR_11 < VAR_4->rx_tbl[VAR_10].win_size; VAR_11++)
    VAR_5 += FUNC_1(VAR_5, "%c ",
          VAR_4->rx_tbl[VAR_10].buffer[VAR_11] ?
          '1' : '0');

   VAR_5 += FUNC_1(VAR_5, "\n");
  }
 }

 if (VAR_4->tdls_peer_num) {
  VAR_5 += FUNC_1(VAR_5, "TDLS peer table:\n");
  for (VAR_10 = 0; VAR_10 < VAR_4->tdls_peer_num; VAR_10++) {
   VAR_5 += FUNC_1(VAR_5, "peer = %pM",
         VAR_4->tdls_list[VAR_10].peer_addr);
   VAR_5 += FUNC_1(VAR_5, "\n");
  }
 }

 return VAR_5 - VAR_3;
}
