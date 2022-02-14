
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {unsigned int vlan; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const struct l2t_entry *VAR_1)
{
 return VAR_1->vlan >> VAR_0;
}
