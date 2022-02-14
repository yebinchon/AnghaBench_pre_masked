
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct octeon_device {int adapter_refcount; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (struct octeon_device*,int ) ;

int FUNC_2(struct octeon_device *VAR_2)
{
 u64 VAR_3;
 if (FUNC_0(VAR_2->adapter_refcount) > 1)
  return 1;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 return (VAR_3 >> VAR_1) & 1ULL;
}
