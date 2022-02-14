
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* callback ) (size_t,struct vchiq_header*,int ,void*) ;} ;
struct vchiq_service {int handle; TYPE_1__* state; TYPE_2__ base; int localport; } ;
struct vchiq_header {int dummy; } ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef size_t VCHIQ_REASON_T ;
struct TYPE_3__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (size_t,struct vchiq_header*,int ,void*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int ,struct vchiq_header*,void*) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static inline VCHIQ_STATUS_T
FUNC_3(struct vchiq_service *VAR_4, VCHIQ_REASON_T VAR_5,
        struct vchiq_header *VAR_6, void *VAR_7)
{
 VCHIQ_STATUS_T VAR_8;

 FUNC_1(VAR_3, "%d: callback:%d (%s, %pK, %pK)",
  VAR_4->state->id, VAR_4->localport, VAR_2[VAR_5],
  VAR_6, VAR_7);
 VAR_8 = VAR_4->base.callback(VAR_5, VAR_6, VAR_4->handle,
  VAR_7);
 if (VAR_8 == VAR_0) {
  FUNC_2(VAR_3,
   "%d: ignoring ERROR from callback to service %x",
   VAR_4->state->id, VAR_4->handle);
  VAR_8 = VAR_1;
 }
 return VAR_8;
}
