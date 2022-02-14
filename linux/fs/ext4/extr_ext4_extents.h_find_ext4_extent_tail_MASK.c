
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_tail {int dummy; } ;
struct ext4_extent_header {int dummy; } ;


 int FUNC_0 (struct ext4_extent_header*) ;

__attribute__((used)) static inline struct ext4_extent_tail *
FUNC_1(struct ext4_extent_header *VAR_0)
{
 return (struct ext4_extent_tail *)(((void *)VAR_0) +
        FUNC_0(VAR_0));
}
