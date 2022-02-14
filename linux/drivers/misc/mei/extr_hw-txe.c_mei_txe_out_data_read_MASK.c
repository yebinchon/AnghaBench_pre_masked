
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int dummy; } ;
struct mei_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mei_txe_hw*,scalar_t__) ;
 struct mei_txe_hw* FUNC_1 (struct mei_device const*) ;

__attribute__((used)) static u32 FUNC_2(const struct mei_device *VAR_1,
     unsigned long VAR_2)
{
 struct mei_txe_hw *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3,
  VAR_0 + (VAR_2 * sizeof(u32)));
}
