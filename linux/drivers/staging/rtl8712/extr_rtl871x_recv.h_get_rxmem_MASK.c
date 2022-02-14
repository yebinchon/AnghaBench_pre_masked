
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rx_head; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;



__attribute__((used)) static inline u8 *FUNC_0(union recv_frame *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 return VAR_0->u.hdr.rx_head;
}
