
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct mptsas_phyinfo {TYPE_1__* port_details; } ;
struct TYPE_2__ {struct sas_rphy* rphy; } ;



__attribute__((used)) static inline struct sas_rphy *
FUNC_0(struct mptsas_phyinfo *VAR_0)
{
 if (VAR_0->port_details)
  return VAR_0->port_details->rphy;
 else
  return ((void*)0);
}
