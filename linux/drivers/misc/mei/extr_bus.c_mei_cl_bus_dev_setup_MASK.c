
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl_device {int do_match; } ;


 int FUNC_0 (struct mei_cl_device*) ;
 int FUNC_1 (struct mei_cl_device*) ;

__attribute__((used)) static bool FUNC_2(struct mei_device *VAR_0,
     struct mei_cl_device *VAR_1)
{
 VAR_1->do_match = 1;
 FUNC_0(VAR_1);


 if (VAR_1->do_match)
  FUNC_1(VAR_1);

 return VAR_1->do_match == 1;
}
