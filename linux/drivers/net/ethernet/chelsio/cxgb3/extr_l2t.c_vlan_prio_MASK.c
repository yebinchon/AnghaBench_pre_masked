
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {int vlan; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct l2t_entry *VAR_0)
{
 return VAR_0->vlan >> 13;
}
