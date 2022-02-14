
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void smem_private_entry ;
struct smem_partition_header {int dummy; } ;



__attribute__((used)) static struct smem_private_entry *
FUNC_0(struct smem_partition_header *VAR_0)
{
 void *VAR_1 = VAR_0;

 return VAR_1 + sizeof(*VAR_0);
}
