
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vec; } ;
struct TYPE_4__ {TYPE_1__ aprox_match; } ;
struct bnx2x_mcast_obj {TYPE_2__ registry; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bnx2x_mcast_obj*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x_mcast_obj *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0, 0);

 if (VAR_1 >= 0)
  FUNC_0(VAR_0->registry.aprox_match.vec, VAR_1);

 return VAR_1;
}
