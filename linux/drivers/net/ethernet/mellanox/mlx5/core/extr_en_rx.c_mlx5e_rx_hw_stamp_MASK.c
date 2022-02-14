
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwtstamp_config {scalar_t__ rx_filter; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hwtstamp_config *VAR_1)
{
 return VAR_1->rx_filter == VAR_0;
}
