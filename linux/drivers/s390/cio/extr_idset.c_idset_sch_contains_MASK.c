
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int sch_no; int ssid; } ;
struct idset {int dummy; } ;


 int FUNC_0 (struct idset*,int ,int ) ;

int FUNC_1(struct idset *VAR_0, struct subchannel_id VAR_1)
{
 return FUNC_0(VAR_0, VAR_1.ssid, VAR_1.sch_no);
}
