
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {scalar_t__ regdump_len; scalar_t__ eedump_len; int testinfo_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;
struct bnxt {int num_tests; int pdev; int fw_ver_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct bnxt *VAR_4 = FUNC_1(VAR_2);

 FUNC_3(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_3(VAR_3->fw_version, VAR_4->fw_ver_str, sizeof(VAR_3->fw_version));
 FUNC_3(VAR_3->bus_info, FUNC_2(VAR_4->pdev), sizeof(VAR_3->bus_info));
 VAR_3->n_stats = FUNC_0(VAR_4);
 VAR_3->testinfo_len = VAR_4->num_tests;

 VAR_3->eedump_len = 0;

 VAR_3->regdump_len = 0;
}
