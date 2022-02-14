
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int vendor_pn; int vendor_name; } ;
struct be_adapter {TYPE_1__ phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*,int ,int *) ;
 int FUNC_1 (int ,int *,scalar_t__) ;

int FUNC_2(struct be_adapter *VAR_5)
{
 u8 VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_4,
         VAR_6);
 if (!VAR_7) {
  FUNC_1(VAR_5->phy.vendor_name, VAR_6 +
   VAR_2, VAR_1 - 1);
  FUNC_1(VAR_5->phy.vendor_pn,
   VAR_6 + VAR_3,
   VAR_1 - 1);
 }

 return VAR_7;
}
