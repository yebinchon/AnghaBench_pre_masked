
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int mode; } ;



__attribute__((used)) static inline unsigned char FUNC_0(struct kernfs_node *VAR_0)
{
 return (VAR_0->mode >> 12) & 15;
}
