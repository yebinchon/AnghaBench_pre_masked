
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct imstt_regvals {int dummy; } ;
struct imstt_par {scalar_t__ ramdac; } ;


 scalar_t__ VAR_0 ;
 struct imstt_regvals* FUNC_0 (struct imstt_par*,int ,int ) ;
 struct imstt_regvals* FUNC_1 (struct imstt_par*,int ,int ) ;

__attribute__((used)) static struct imstt_regvals *
FUNC_2 (struct imstt_par *VAR_1, u_int VAR_2, u_int VAR_3)
{
 if (VAR_1->ramdac == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3);
}
