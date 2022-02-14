
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_rc {int vendor_id; int device_id; struct cdns_pcie pcie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct cdns_pcie*,int ,int ) ;
 int FUNC_3 (struct cdns_pcie*,int ,int) ;
 int FUNC_4 (struct cdns_pcie*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cdns_pcie_rc *VAR_12)
{
 struct cdns_pcie *VAR_13 = &VAR_12->pcie;
 u32 VAR_14, VAR_15;
 VAR_15 = VAR_0;
 VAR_14 = FUNC_0(VAR_15) |
  FUNC_1(VAR_15) |
  VAR_5 |
  VAR_4 |
  VAR_3 |
  VAR_2;
 FUNC_4(VAR_13, VAR_1, VAR_14);


 if (VAR_12->vendor_id != 0xffff)
  FUNC_3(VAR_13, VAR_11, VAR_12->vendor_id);
 if (VAR_12->device_id != 0xffff)
  FUNC_3(VAR_13, VAR_10, VAR_12->device_id);

 FUNC_2(VAR_13, VAR_9, 0);
 FUNC_2(VAR_13, VAR_8, 0);
 FUNC_3(VAR_13, VAR_7, VAR_6);

 return 0;
}
