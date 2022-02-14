
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_ts_info {int so_timestamping; int phc_index; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ethtool_ts_info *VAR_2)
{
 VAR_2->so_timestamping = VAR_0 |
    VAR_1;
 VAR_2->phc_index = -1;
 return 0;
}
