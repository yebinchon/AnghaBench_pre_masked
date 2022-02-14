
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ lcp; } ;
struct c67x00_device {TYPE_2__ hpi; } ;


 int VAR_0 ;
 int FUNC_0 (struct c67x00_device*,int ) ;
 int FUNC_1 (struct c67x00_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct c67x00_device *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->hpi.lcp.mutex);
 FUNC_0(VAR_1, VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(&VAR_1->hpi.lcp.mutex);

 return VAR_2;
}
