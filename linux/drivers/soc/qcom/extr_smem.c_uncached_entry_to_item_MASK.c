
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smem_private_entry {int padding_hdr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct smem_private_entry *VAR_0)
{
 void *VAR_1 = VAR_0;

 return VAR_1 + sizeof(*VAR_0) + FUNC_0(VAR_0->padding_hdr);
}
