
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_service {scalar_t__ ref_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct vchiq_service *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(!VAR_1);
 if (VAR_1) {
  FUNC_0(VAR_1->ref_count == 0);
  VAR_1->ref_count++;
 }
 FUNC_2(&VAR_0);
}
