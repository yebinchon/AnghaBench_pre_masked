
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; void* msg; scalar_t__ mac; } ;
union nic_mbx {TYPE_1__ xcast; } ;
typedef int u8 ;
struct xcast_addr_list {int count; scalar_t__* mc; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct xcast_addr_list*) ;
 scalar_t__ FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_2(u8 VAR_4, struct xcast_addr_list *VAR_5,
         struct nicvf *VAR_6)
{
 union nic_mbx VAR_7 = {};
 int VAR_8;
 VAR_7.xcast.msg = VAR_2;
 if (FUNC_1(VAR_6, &VAR_7) < 0)
  goto free_mc;

 if (VAR_4 & VAR_0) {



  VAR_7.xcast.msg = VAR_1;
  VAR_7.xcast.mac = 0;
  if (FUNC_1(VAR_6, &VAR_7) < 0)
   goto free_mc;
 }


 if (VAR_5) {

  for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
   VAR_7.xcast.msg = VAR_1;
   VAR_7.xcast.mac = VAR_5->mc[VAR_8];
   if (FUNC_1(VAR_6, &VAR_7) < 0)
    goto free_mc;
  }
 }


 VAR_7.xcast.msg = VAR_3;
 VAR_7.xcast.mode = VAR_4;

 FUNC_1(VAR_6, &VAR_7);
free_mc:
 FUNC_0(VAR_5);
}
