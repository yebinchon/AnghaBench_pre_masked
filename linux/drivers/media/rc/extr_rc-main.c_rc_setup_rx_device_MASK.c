
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {scalar_t__ allowed_protocols; TYPE_1__* input_dev; } ;
struct TYPE_2__ {int* rep; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3->input_dev);
 if (VAR_4)
  return VAR_4;







 if (VAR_3->allowed_protocols == VAR_0)
  VAR_3->input_dev->rep[VAR_1] = 0;
 else
  VAR_3->input_dev->rep[VAR_1] = 500;






 VAR_3->input_dev->rep[VAR_2] = 125;

 return 0;
}
