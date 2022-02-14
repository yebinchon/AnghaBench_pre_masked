
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slot {scalar_t__ device; } ;
struct controller {scalar_t__ slot_device_offset; } ;


 int FUNC_0 (struct controller*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct controller *VAR_0, struct slot *VAR_1)
{
 u8 VAR_2;

 VAR_2 = VAR_1->device - VAR_0->slot_device_offset;

 return FUNC_0(VAR_0, VAR_2);
}
