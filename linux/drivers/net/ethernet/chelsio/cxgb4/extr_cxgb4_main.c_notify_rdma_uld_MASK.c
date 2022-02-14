
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* uld; } ;
typedef enum cxgb4_uld { ____Placeholder_cxgb4_uld } cxgb4_uld ;
typedef enum cxgb4_control { ____Placeholder_cxgb4_control } cxgb4_control ;
struct TYPE_2__ {scalar_t__ handle; int (* control ) (scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1, enum cxgb4_control VAR_2)
{
 enum cxgb4_uld VAR_3 = VAR_0;

 if (VAR_1->uld && VAR_1->uld[VAR_3].handle)
  VAR_1->uld[VAR_3].control(VAR_1->uld[VAR_3].handle, VAR_2);
}
