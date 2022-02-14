
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rss_size; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct ethtool_channels {int other_count; int max_other; int combined_count; int max_combined; } ;


 int FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0,
          struct ethtool_channels *VAR_1)
{
 VAR_1->max_combined = FUNC_0(VAR_0);
 VAR_1->other_count = 1;
 VAR_1->max_other = 1;
 VAR_1->combined_count = VAR_0->kinfo.rss_size;
}
