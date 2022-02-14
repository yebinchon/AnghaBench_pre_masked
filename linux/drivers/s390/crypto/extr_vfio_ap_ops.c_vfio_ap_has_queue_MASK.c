
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ap_queue_reserved {unsigned long* apid; unsigned long* apqi; int reserved; } ;
struct device {int dummy; } ;
struct ap_queue {scalar_t__ qid; } ;
typedef scalar_t__ ap_qid_t ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 struct ap_queue* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct vfio_ap_queue_reserved *VAR_3 = VAR_2;
 struct ap_queue *VAR_4 = FUNC_3(VAR_1);
 ap_qid_t VAR_5;
 unsigned long VAR_6;

 if (VAR_3->apid && VAR_3->apqi) {
  VAR_5 = FUNC_0(*VAR_3->apid, *VAR_3->apqi);
  if (VAR_5 == VAR_4->qid)
   VAR_3->reserved = 1;
 } else if (VAR_3->apid && !VAR_3->apqi) {
  VAR_6 = FUNC_1(VAR_4->qid);
  if (VAR_6 == *VAR_3->apid)
   VAR_3->reserved = 1;
 } else if (!VAR_3->apid && VAR_3->apqi) {
  VAR_6 = FUNC_2(VAR_4->qid);
  if (VAR_6 == *VAR_3->apqi)
   VAR_3->reserved = 1;
 } else {
  return -VAR_0;
 }

 return 0;
}
