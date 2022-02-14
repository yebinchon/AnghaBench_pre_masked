
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ksz_device {int * regmap; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct ksz_device *VAR_0, u32 VAR_1, u64 *VAR_2)
{
 u32 VAR_3[2];
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->regmap[2], VAR_1, VAR_3, 2);
 if (!VAR_4) {

  VAR_3[0] = FUNC_1(VAR_3[0]);
  VAR_3[1] = FUNC_1(VAR_3[1]);
  *VAR_2 = FUNC_2((u64)*VAR_3);
 }

 return VAR_4;
}
