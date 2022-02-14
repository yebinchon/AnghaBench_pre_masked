
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {scalar_t__ ref_count; int iss_mutex; } ;


 scalar_t__ FUNC_0 (struct iss_device*) ;
 int FUNC_1 (struct iss_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct iss_device *FUNC_4(struct iss_device *VAR_0)
{
 struct iss_device *VAR_1 = VAR_0;

 if (!VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_0->iss_mutex);
 if (VAR_0->ref_count > 0)
  goto out;

 if (FUNC_0(VAR_0) < 0) {
  VAR_1 = ((void*)0);
  goto out;
 }

 FUNC_1(VAR_0);

out:
 if (VAR_1)
  VAR_0->ref_count++;
 FUNC_3(&VAR_0->iss_mutex);

 return VAR_1;
}
