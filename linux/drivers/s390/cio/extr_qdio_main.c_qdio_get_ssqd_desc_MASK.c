
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int sch_no; } ;
struct qdio_ssqd_desc {int dummy; } ;
struct ccw_device {int private; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_2 (int *,struct subchannel_id*,struct qdio_ssqd_desc*) ;

int FUNC_3(struct ccw_device *VAR_1,
         struct qdio_ssqd_desc *VAR_2)
{
 struct subchannel_id VAR_3;

 if (!VAR_1 || !VAR_1->private)
  return -VAR_0;

 FUNC_1(VAR_1, &VAR_3);
 FUNC_0("get ssqd:%4x", VAR_3.sch_no);
 return FUNC_2(((void*)0), &VAR_3, VAR_2);
}
