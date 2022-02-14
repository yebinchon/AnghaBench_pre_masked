
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {scalar_t__ ref_count; int iss_mutex; int crashed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iss_device*) ;
 int FUNC_2 (struct iss_device*) ;
 int FUNC_3 (struct iss_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iss_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_5(&VAR_0->iss_mutex);
 FUNC_0(VAR_0->ref_count == 0);
 if (--VAR_0->ref_count == 0) {
  FUNC_2(VAR_0);





  if (!FUNC_4(&VAR_0->crashed))
   FUNC_3(VAR_0);
  FUNC_1(VAR_0);
 }
 FUNC_6(&VAR_0->iss_mutex);
}
