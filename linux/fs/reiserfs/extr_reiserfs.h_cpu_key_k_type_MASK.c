
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k_type; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;
typedef int loff_t ;



__attribute__((used)) static inline loff_t FUNC_0(const struct cpu_key *VAR_0)
{
 return VAR_0->on_disk_key.k_type;
}
