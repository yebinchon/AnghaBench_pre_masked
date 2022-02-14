
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ufs_dev_pwr_mode { ____Placeholder_ufs_dev_pwr_mode } ufs_dev_pwr_mode ;






__attribute__((used)) static const char *FUNC_0(
   enum ufs_dev_pwr_mode VAR_0)
{
 switch (VAR_0) {
 case 130: return "ACTIVE";
 case 128: return "SLEEP";
 case 129: return "POWERDOWN";
 default: return "UNKNOWN";
 }
}
