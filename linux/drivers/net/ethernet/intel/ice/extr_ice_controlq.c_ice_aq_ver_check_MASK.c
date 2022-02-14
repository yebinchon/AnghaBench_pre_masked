
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {scalar_t__ api_maj_ver; scalar_t__ api_min_ver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ice_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ice_hw *VAR_2)
{
 if (VAR_2->api_maj_ver > VAR_0) {

  FUNC_1(FUNC_2(VAR_2),
    "The driver for the device stopped because the NVM image is newer than expected. You must install the most recent version of the network driver.\n");
  return 0;
 } else if (VAR_2->api_maj_ver == VAR_0) {
  if (VAR_2->api_min_ver > (VAR_1 + 2))
   FUNC_0(FUNC_2(VAR_2),
     "The driver for the device detected a newer version of the NVM image than expected. Please install the most recent version of the network driver.\n");
  else if ((VAR_2->api_min_ver + 2) < VAR_1)
   FUNC_0(FUNC_2(VAR_2),
     "The driver for the device detected an older version of the NVM image than expected. Please update the NVM image.\n");
 } else {

  FUNC_0(FUNC_2(VAR_2),
    "The driver for the device detected an older version of the NVM image than expected. Please update the NVM image.\n");
 }
 return 1;
}
