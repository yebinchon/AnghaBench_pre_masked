
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ssb_device {int core_index; struct ssb_bus* bus; } ;
struct ssb_bus {scalar_t__ mmio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ssb_device *VAR_1, u16 VAR_2, u32 VAR_3)
{
 struct ssb_bus *VAR_4 = VAR_1->bus;

 VAR_2 += VAR_1->core_index * VAR_0;
 FUNC_0(VAR_3, VAR_4->mmio + VAR_2);
}
