
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* out; void* in; } ;
struct TYPE_4__ {TYPE_1__ data; struct pvcalls_data_intf* ring; } ;
struct sock_mapping {TYPE_2__ active; } ;
struct pvcalls_data_intf {int ring_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct sock_mapping*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sock_mapping *VAR_4)
{
 void *VAR_5;

 VAR_4->active.ring = (struct pvcalls_data_intf *)
  FUNC_3(VAR_1);
 if (!VAR_4->active.ring)
  goto out;

 VAR_4->active.ring->ring_order = VAR_2;
 VAR_5 = (void *)FUNC_1(VAR_1 | VAR_3,
     VAR_2);
 if (!VAR_5)
  goto out;

 VAR_4->active.data.in = VAR_5;
 VAR_4->active.data.out = VAR_5 +
  FUNC_0(VAR_2);

 return 0;

out:
 FUNC_2(VAR_4);
 return -VAR_0;
}
