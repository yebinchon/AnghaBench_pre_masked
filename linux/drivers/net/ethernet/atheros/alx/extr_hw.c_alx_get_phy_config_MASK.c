
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct alx_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct alx_hw*,int ) ;
 int FUNC_2 (struct alx_hw*,int ,scalar_t__*) ;

__attribute__((used)) static u16 FUNC_3(struct alx_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_4);

 if ((VAR_8 & VAR_5) == 0)
  return VAR_2;

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 = FUNC_0(VAR_8, VAR_1);
 if (VAR_2 == VAR_8)
  return VAR_2;

 FUNC_2(VAR_7, VAR_3, &VAR_9);
 if (VAR_6 == VAR_9)
  return VAR_8;

 return VAR_2;
}
