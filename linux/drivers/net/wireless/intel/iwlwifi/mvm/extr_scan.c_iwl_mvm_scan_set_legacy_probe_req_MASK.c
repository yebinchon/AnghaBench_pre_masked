
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scan_probe_req_v1 {int buf; int common_data; int * band_data; int mac_header; } ;
struct iwl_scan_probe_req {int buf; int common_data; int * band_data; int mac_header; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct iwl_scan_probe_req_v1 *VAR_1,
      struct iwl_scan_probe_req *VAR_2)
{
 int VAR_3;

 VAR_1->mac_header = VAR_2->mac_header;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->band_data[VAR_3] = VAR_2->band_data[VAR_3];
 VAR_1->common_data = VAR_2->common_data;
 FUNC_0(VAR_1->buf, VAR_2->buf, sizeof(VAR_1->buf));
}
