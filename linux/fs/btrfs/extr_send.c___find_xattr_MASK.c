
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct find_xattr_ctx {int name_len; int found_idx; int found_data_len; int found_data; int name; } ;
struct btrfs_key {int dummy; } ;


 int ENOMEM ;
 int GFP_KERNEL ;
 int kmemdup (char const*,int,int ) ;
 scalar_t__ strncmp (char const*,int ,int) ;

__attribute__((used)) static int __find_xattr(int num, struct btrfs_key *di_key,
   const char *name, int name_len,
   const char *data, int data_len,
   u8 type, void *vctx)
{
 struct find_xattr_ctx *ctx = vctx;

 if (name_len == ctx->name_len &&
     strncmp(name, ctx->name, name_len) == 0) {
  ctx->found_idx = num;
  ctx->found_data_len = data_len;
  ctx->found_data = kmemdup(data, data_len, GFP_KERNEL);
  if (!ctx->found_data)
   return -ENOMEM;
  return 1;
 }
 return 0;
}
