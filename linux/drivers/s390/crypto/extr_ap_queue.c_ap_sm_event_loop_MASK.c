
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue {int dummy; } ;
typedef enum ap_wait { ____Placeholder_ap_wait } ap_wait ;
typedef enum ap_event { ____Placeholder_ap_event } ap_event ;


 int VAR_0 ;
 int FUNC_0 (struct ap_queue*,int) ;

enum ap_wait FUNC_1(struct ap_queue *VAR_1, enum ap_event VAR_2)
{
 enum ap_wait VAR_3;

 while ((VAR_3 = FUNC_0(VAR_1, VAR_2)) == VAR_0)
  ;
 return VAR_3;
}
