
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ip4src_v ;
typedef int ip4src_m ;
typedef int ip4dst_v ;
typedef int ip4dst_m ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {int ipv4; } ;
struct TYPE_8__ {TYPE_1__ ipv4_layout; } ;
struct TYPE_6__ {int ipv4; } ;
struct TYPE_7__ {TYPE_2__ ipv4_layout; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, void *VAR_5, __be32 VAR_6,
 __be32 VAR_7, __be32 VAR_8, __be32 VAR_9)
{
 if (VAR_6) {
  FUNC_2(FUNC_0(VAR_5, VAR_3),
         &VAR_7, sizeof(VAR_7));
  FUNC_2(FUNC_0(VAR_4, VAR_3),
         &VAR_6, sizeof(VAR_6));
 }
 if (VAR_8) {
  FUNC_2(FUNC_0(VAR_5, VAR_1),
         &VAR_9, sizeof(VAR_9));
  FUNC_2(FUNC_0(VAR_4, VAR_1),
         &VAR_8, sizeof(VAR_8));
 }

 FUNC_1(VAR_4, VAR_2, 0xffff);
 FUNC_1(VAR_5, VAR_2, VAR_0);
}
