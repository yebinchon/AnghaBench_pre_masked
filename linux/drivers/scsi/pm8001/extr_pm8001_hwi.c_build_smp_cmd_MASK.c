
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smp_req {void* len_ip_ir; void* device_id; int tag; } ;
typedef int __le32 ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, __le32 VAR_1, struct smp_req *VAR_2)
{
 VAR_2->tag = VAR_1;
 VAR_2->device_id = FUNC_0(VAR_0);
 VAR_2->len_ip_ir = FUNC_0(1|(1 << 1));
}
