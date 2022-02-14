
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int dummy; } ;
struct tape_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct tape_request*) ;
 int FUNC_1 (struct tape_request*) ;
 struct tape_request* FUNC_2 (struct tape_device*) ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int FUNC_4(struct tape_device *VAR_0)
{
 struct tape_request *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 return FUNC_3(VAR_0, VAR_1);
}
