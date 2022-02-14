
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dx_entry {int block; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline ext4_lblk_t FUNC_1(struct dx_entry *VAR_0)
{
 return FUNC_0(VAR_0->block) & 0x0fffffff;
}
