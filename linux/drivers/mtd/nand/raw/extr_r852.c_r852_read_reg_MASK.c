
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline uint8_t FUNC_1(struct r852_device *VAR_0, int VAR_1)
{
 uint8_t VAR_2 = FUNC_0(VAR_0->mmio + VAR_1);
 return VAR_2;
}
