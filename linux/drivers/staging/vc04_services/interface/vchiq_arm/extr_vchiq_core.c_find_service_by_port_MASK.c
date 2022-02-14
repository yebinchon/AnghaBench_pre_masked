
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {struct vchiq_service** services; } ;
struct vchiq_service {scalar_t__ srvstate; scalar_t__ ref_count; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int) ;

struct vchiq_service *
FUNC_4(struct vchiq_state *VAR_4, int VAR_5)
{
 struct vchiq_service *VAR_6 = ((void*)0);

 if ((unsigned int)VAR_5 <= VAR_0) {
  FUNC_1(&VAR_2);
  VAR_6 = VAR_4->services[VAR_5];
  if (VAR_6 && (VAR_6->srvstate != VAR_1)) {
   FUNC_0(VAR_6->ref_count == 0);
   VAR_6->ref_count++;
  } else
   VAR_6 = ((void*)0);
  FUNC_2(&VAR_2);
 }

 if (!VAR_6)
  FUNC_3(VAR_3,
   "Invalid port %d", VAR_5);

 return VAR_6;
}
