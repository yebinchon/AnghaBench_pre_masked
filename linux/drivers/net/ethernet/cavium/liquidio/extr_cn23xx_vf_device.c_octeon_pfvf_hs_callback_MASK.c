
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct TYPE_3__ {int params; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct octeon_mbox_cmd {int recv_len; scalar_t__ data; TYPE_2__ msg; } ;
struct octeon_device {int pfvf_hsword; } ;
struct lio_version {int major; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct octeon_device *VAR_1,
        struct octeon_mbox_cmd *VAR_2,
        void *VAR_3)
{
 u32 VAR_4 = 0;

 FUNC_1((uint8_t *)&VAR_1->pfvf_hsword, VAR_2->msg.s.params,
        VAR_0);
 if (VAR_2->recv_len > 1) {
  VAR_4 = ((struct lio_version *)(VAR_2->data))->major;
  VAR_4 = VAR_4 << 16;
 }

 FUNC_0((atomic_t *)VAR_3, VAR_4 | 1);
}
