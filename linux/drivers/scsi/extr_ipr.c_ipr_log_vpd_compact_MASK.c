
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int product_id; int vendor_id; } ;
struct ipr_vpd {int sn; TYPE_1__ vpids; } ;
struct ipr_hostrcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipr_hostrcb*,char*,char*,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_3, struct ipr_hostrcb *VAR_4,
    struct ipr_vpd *VAR_5)
{
 char VAR_6[VAR_2 + VAR_0 + VAR_1 + 3];
 int VAR_7 = 0;

 FUNC_1(VAR_6, VAR_5->vpids.vendor_id, VAR_2);
 VAR_7 = FUNC_2(VAR_2 - 1, VAR_6);

 FUNC_1(&VAR_6[VAR_7], VAR_5->vpids.product_id, VAR_0);
 VAR_7 = FUNC_2(VAR_7 + VAR_0 - 1, VAR_6);

 FUNC_1(&VAR_6[VAR_7], VAR_5->sn, VAR_1);
 VAR_6[VAR_1 + VAR_7] = '\0';

 FUNC_0(VAR_4, "%s VPID/SN: %s\n", VAR_3, VAR_6);
}
