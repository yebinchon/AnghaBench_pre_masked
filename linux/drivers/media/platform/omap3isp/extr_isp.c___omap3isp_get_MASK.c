
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {scalar_t__ ref_count; int isp_mutex; scalar_t__ has_context; } ;


 scalar_t__ FUNC_0 (struct isp_device*) ;
 int FUNC_1 (struct isp_device*) ;
 int FUNC_2 (struct isp_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct isp_device *FUNC_5(struct isp_device *VAR_0, bool VAR_1)
{
 struct isp_device *VAR_2 = VAR_0;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_3(&VAR_0->isp_mutex);
 if (VAR_0->ref_count > 0)
  goto out;

 if (FUNC_0(VAR_0) < 0) {
  VAR_2 = ((void*)0);
  goto out;
 }


 if (VAR_0->has_context)
  FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_0);

out:
 if (VAR_2 != ((void*)0))
  VAR_0->ref_count++;
 FUNC_4(&VAR_0->isp_mutex);

 return VAR_2;
}
