
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct seq_file {int file; } ;
struct hfa384x_hostscan_result {unsigned char* sup_rates; unsigned char* ssid; int ssid_len; int atim; int bssid; int rate; int capability; int beacon_interval; int sl; int anl; int chid; } ;
typedef int s16 ;
struct TYPE_3__ {struct hfa384x_hostscan_result* last_scan_results; } ;
typedef TYPE_1__ local_info_t ;


 TYPE_1__* FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 local_info_t *VAR_3 = FUNC_0(FUNC_1(VAR_1->file));
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 struct hfa384x_hostscan_result *VAR_7;
 u8 *VAR_8;

 if (VAR_2 == VAR_0) {
  FUNC_3(VAR_1,
      "CHID ANL SL BcnInt Capab Rate BSSID ATIM SupRates SSID\n");
  return 0;
 }

 VAR_4 = (unsigned long)VAR_2 - 2;
 VAR_7 = &VAR_3->last_scan_results[VAR_4];

 FUNC_3(VAR_1, "%d %d %d %d 0x%02x %d %pM %d ",
     FUNC_2(VAR_7->chid),
     (s16) FUNC_2(VAR_7->anl),
     (s16) FUNC_2(VAR_7->sl),
     FUNC_2(VAR_7->beacon_interval),
     FUNC_2(VAR_7->capability),
     FUNC_2(VAR_7->rate),
     VAR_7->bssid,
     FUNC_2(VAR_7->atim));

 VAR_8 = VAR_7->sup_rates;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_7->sup_rates); VAR_5++) {
  if (VAR_8[VAR_5] == 0)
   break;
  FUNC_3(VAR_1, "<%02x>", VAR_8[VAR_5]);
 }
 FUNC_4(VAR_1, ' ');

 VAR_8 = VAR_7->ssid;
 VAR_6 = FUNC_2(VAR_7->ssid_len);
 if (VAR_6 > 32)
  VAR_6 = 32;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  unsigned char VAR_9 = VAR_8[VAR_5];
  if (VAR_9 >= 32 && VAR_9 < 127)
   FUNC_4(VAR_1, VAR_9);
  else
   FUNC_3(VAR_1, "<%02x>", VAR_9);
 }
 FUNC_4(VAR_1, '\n');
 return 0;
}
