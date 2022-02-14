
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_scrub {TYPE_1__* sm; } ;
struct TYPE_2__ {int sm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static inline uint
FUNC_0(
 struct xfs_scrub *VAR_3)
{
 switch (VAR_3->sm->sm_type) {
 case 128:
  return VAR_2;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 default:
  return 0;
 }
}
