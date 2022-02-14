
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ksz_device {TYPE_1__* vlan_cache; } ;
struct TYPE_2__ {int* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_device*,int ,int,int*) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_2, u16 VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 FUNC_0(VAR_2, VAR_0, VAR_3, &VAR_4);
 VAR_3 *= 4;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_2->vlan_cache[VAR_3 + VAR_5].table[0] = (u16)VAR_4;
  VAR_4 >>= VAR_1;
 }
}
