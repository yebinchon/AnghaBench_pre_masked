
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct send_ctx {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_timespec {int dummy; } ;
typedef int bts ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_timespec*,unsigned long,int) ;
 int FUNC_1 (struct send_ctx*,int ,struct btrfs_timespec*,int) ;

__attribute__((used)) static int FUNC_2(struct send_ctx *VAR_0, u16 VAR_1,
      struct extent_buffer *VAR_2,
      struct btrfs_timespec *VAR_3)
{
 struct btrfs_timespec VAR_4;
 FUNC_0(VAR_2, &VAR_4, (unsigned long)VAR_3, sizeof(VAR_4));
 return FUNC_1(VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
}
