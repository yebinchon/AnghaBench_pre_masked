
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {scalar_t__ ref_count; int has_context; int isp_mutex; scalar_t__ stop_failure; int crashed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct isp_device*) ;
 int FUNC_2 (struct isp_device*) ;
 int FUNC_3 (struct isp_device*) ;
 int FUNC_4 (struct isp_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct isp_device *VAR_0, bool VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_6(&VAR_0->isp_mutex);
 FUNC_0(VAR_0->ref_count == 0);
 if (--VAR_0->ref_count == 0) {
  FUNC_2(VAR_0);
  if (VAR_1) {
   FUNC_4(VAR_0);
   VAR_0->has_context = 1;
  }



  if (!FUNC_5(&VAR_0->crashed) ||
      VAR_0->stop_failure)
   FUNC_3(VAR_0);
  FUNC_1(VAR_0);
 }
 FUNC_7(&VAR_0->isp_mutex);
}
