
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_device {int num_outstanding_req; scalar_t__ destroy; } ;
struct hv_device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct storvsc_device* FUNC_1 (struct hv_device*) ;

__attribute__((used)) static inline struct storvsc_device *FUNC_2(
     struct hv_device *VAR_0)
{
 struct storvsc_device *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  goto get_in_err;






 if (VAR_1->destroy &&
  (FUNC_0(&VAR_1->num_outstanding_req) == 0))
  VAR_1 = ((void*)0);

get_in_err:
 return VAR_1;

}
