
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mic_device {int mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct mic_device *VAR_2, int VAR_3)
{
 return FUNC_0(&VAR_2->mmio,
  VAR_0 +
  VAR_1 + VAR_3 * 4);
}
