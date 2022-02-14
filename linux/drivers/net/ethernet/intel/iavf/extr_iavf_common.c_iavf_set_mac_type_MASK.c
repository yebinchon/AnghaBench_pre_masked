
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct iavf_hw {scalar_t__ vendor_id; int device_id; TYPE_1__ mac; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iavf_hw*,char*,int ,int) ;

enum iavf_status FUNC_1(struct iavf_hw *VAR_5)
{
 enum iavf_status VAR_6 = 0;

 if (VAR_5->vendor_id == VAR_4) {
  switch (VAR_5->device_id) {
  case 128:
   VAR_5->mac.type = VAR_3;
   break;
  case 130:
  case 129:
  case 131:
   VAR_5->mac.type = VAR_2;
   break;
  default:
   VAR_5->mac.type = VAR_1;
   break;
  }
 } else {
  VAR_6 = VAR_0;
 }

 FUNC_0(VAR_5, "found mac: %d, returns: %d\n", VAR_5->mac.type, VAR_6);
 return VAR_6;
}
