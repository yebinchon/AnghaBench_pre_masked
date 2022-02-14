
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int ssid; int sch_no; } ;
struct idset {int num_id; int bitmap; } ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct idset *VAR_0, struct subchannel_id VAR_1)
{
 int VAR_2 = VAR_1.ssid * VAR_0->num_id + VAR_1.sch_no;

 FUNC_0(VAR_0->bitmap, VAR_2, VAR_0->num_id - VAR_1.sch_no);
}
