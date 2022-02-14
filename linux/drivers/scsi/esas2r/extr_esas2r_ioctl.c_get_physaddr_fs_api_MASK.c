
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct esas2r_sg_context {scalar_t__ cur_offset; scalar_t__ adapter; } ;
struct esas2r_ioctl_fs {int dummy; } ;
struct esas2r_adapter {int ppfs_api_buffer; int fs_api_buffer_size; scalar_t__ fs_api_buffer; } ;



__attribute__((used)) static u32 FUNC_0(struct esas2r_sg_context *VAR_0, u64 *VAR_1)
{
 struct esas2r_adapter *VAR_2 = (struct esas2r_adapter *)VAR_0->adapter;
 struct esas2r_ioctl_fs *VAR_3 =
  (struct esas2r_ioctl_fs *)VAR_2->fs_api_buffer;
 u32 VAR_4 = (u8 *)VAR_0->cur_offset - (u8 *)VAR_3;

 (*VAR_1) = VAR_2->ppfs_api_buffer + VAR_4;

 return VAR_2->fs_api_buffer_size - VAR_4;
}
