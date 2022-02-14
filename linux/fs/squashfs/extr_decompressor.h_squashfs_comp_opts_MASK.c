
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_sb_info {TYPE_1__* decompressor; } ;
struct TYPE_2__ {void* (* comp_opts ) (struct squashfs_sb_info*,void*,int) ;} ;


 void* FUNC_0 (struct squashfs_sb_info*,void*,int) ;

__attribute__((used)) static inline void *FUNC_1(struct squashfs_sb_info *VAR_0,
       void *VAR_1, int VAR_2)
{
 return VAR_0->decompressor->comp_opts ?
  VAR_0->decompressor->comp_opts(VAR_0, VAR_1, VAR_2) : ((void*)0);
}
