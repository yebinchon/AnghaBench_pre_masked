
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_bdev; } ;
struct fs_context {scalar_t__ sget_key; } ;



__attribute__((used)) static int FUNC_0(struct super_block *VAR_0, struct fs_context *VAR_1)
{
 return (VAR_1->sget_key == VAR_0->s_bdev);
}
