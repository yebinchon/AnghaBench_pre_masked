
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct rio_mport*,int ,int ,scalar_t__,scalar_t__*) ;

u32
FUNC_3(struct rio_mport *VAR_2, int VAR_3, u16 VAR_4,
        u8 VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 if (VAR_6 == 0) {
  if (VAR_3)
   FUNC_1(VAR_2, VAR_0,
       &VAR_7);
  else
   FUNC_2(VAR_2, VAR_4, VAR_5,
       VAR_0, &VAR_7);
  return VAR_7 & VAR_1;
 } else {
  if (VAR_3)
   FUNC_1(VAR_2, VAR_6, &VAR_7);
  else
   FUNC_2(VAR_2, VAR_4, VAR_5,
       VAR_6, &VAR_7);
  return FUNC_0(VAR_7);
 }
}
