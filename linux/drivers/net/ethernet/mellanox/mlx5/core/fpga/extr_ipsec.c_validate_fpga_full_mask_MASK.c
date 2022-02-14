
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_10__ {int ipv6; } ;
struct TYPE_8__ {int ipv4; } ;
struct TYPE_12__ {TYPE_4__ ipv6_layout; TYPE_2__ ipv4_layout; } ;
struct TYPE_9__ {int ipv6; } ;
struct TYPE_7__ {int ipv4; } ;
struct TYPE_11__ {TYPE_3__ ipv6_layout; TYPE_1__ ipv4_layout; } ;


 void const* FUNC_0 (int ,void const*,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void const*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,void const*,void const*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__ VAR_11 ;

__attribute__((used)) static bool FUNC_4(struct mlx5_core_dev *VAR_12,
        const u32 *VAR_13,
        const u32 *VAR_14)
{
 const void *VAR_15 = FUNC_0(VAR_1,
       VAR_13,
       VAR_8);
 const void *VAR_16 = FUNC_0(VAR_1,
          VAR_13,
          VAR_10);
 const void *VAR_17 = FUNC_0(VAR_1,
          VAR_14,
          VAR_10);

 if (FUNC_3(VAR_12, VAR_16, VAR_17)) {
  const void *VAR_18 = FUNC_0(VAR_2,
          VAR_16,
          VAR_11);
  const void *VAR_19 = FUNC_0(VAR_2,
          VAR_16,
          VAR_0);

  if (!FUNC_2(VAR_18, FUNC_1(VAR_5,
             VAR_4)) ||
      !FUNC_2(VAR_19, FUNC_1(VAR_5,
             VAR_4)))
   return 0;
 } else {
  const void *VAR_20 = FUNC_0(VAR_2,
          VAR_16,
          VAR_11);
  const void *VAR_21 = FUNC_0(VAR_2,
          VAR_16,
          VAR_0);

  if (!FUNC_2(VAR_20, FUNC_1(VAR_7,
             VAR_6)) ||
      !FUNC_2(VAR_21, FUNC_1(VAR_7,
             VAR_6)))
   return 0;
 }

 if (!FUNC_2(FUNC_0(VAR_3, VAR_15,
           VAR_9),
     FUNC_1(VAR_3, VAR_9)))
  return 0;

 return 1;
}
