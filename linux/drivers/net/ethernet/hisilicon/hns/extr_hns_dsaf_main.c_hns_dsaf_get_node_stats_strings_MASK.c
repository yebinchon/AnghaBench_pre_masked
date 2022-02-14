
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_device {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,int,...) ;

__attribute__((used)) static char *FUNC_2(char *VAR_3, int VAR_4,
          struct dsaf_device *VAR_5)
{
 char *VAR_6 = VAR_3;
 int VAR_7;
 bool VAR_8 = FUNC_0(VAR_5->dsaf_ver);

 FUNC_1(VAR_6, VAR_2, "innod%d_pad_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_manage_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_rx_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_rx_pkt_id", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_rx_pause_frame", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_release_buf_num", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_sbm_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_crc_false_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_bp_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_lookup_rslt_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_local_rslt_fail_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_vlan_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 FUNC_1(VAR_6, VAR_2, "innod%d_stp_drop_pkts", VAR_4);
 VAR_6 += VAR_2;
 if (VAR_4 < VAR_1 && !VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   FUNC_1(VAR_6 + 0 * VAR_2 * VAR_0,
     VAR_2, "inod%d_pfc_prio%d_pkts",
     VAR_4, VAR_7);
   FUNC_1(VAR_6 + 1 * VAR_2 * VAR_0,
     VAR_2, "onod%d_pfc_prio%d_pkts",
     VAR_4, VAR_7);
   VAR_6 += VAR_2;
  }
  VAR_6 += 1 * VAR_0 * VAR_2;
 }
 FUNC_1(VAR_6, VAR_2, "onnod%d_tx_pkts", VAR_4);
 VAR_6 += VAR_2;

 return VAR_6;
}
