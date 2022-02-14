
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_request {int error; } ;
struct memstick_dev {int dummy; } ;


 int FUNC_0 (struct memstick_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct memstick_dev *VAR_0,
     struct memstick_request **VAR_1)
{
 return FUNC_0(VAR_0, (*VAR_1)->error);
}
