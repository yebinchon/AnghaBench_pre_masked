
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cudbg_qdesc_entry {int data_size; } ;



__attribute__((used)) static inline
struct cudbg_qdesc_entry *FUNC_0(struct cudbg_qdesc_entry *VAR_0)
{
 return (struct cudbg_qdesc_entry *)
        ((u8 *)VAR_0 + sizeof(*VAR_0) + VAR_0->data_size);
}
