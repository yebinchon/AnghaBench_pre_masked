
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_block_extent {long long be_f_offset; long long be_length; TYPE_2__* be_device; } ;
typedef int __be32 ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,long long) ;
 int * FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static __be32 *FUNC_3(struct pnfs_block_extent *VAR_3, __be32 *VAR_4)
{
 VAR_4 = FUNC_2(VAR_4, VAR_3->be_device->deviceid.data,
   VAR_0);
 VAR_4 = FUNC_1(VAR_4, VAR_3->be_f_offset << VAR_2);
 VAR_4 = FUNC_1(VAR_4, VAR_3->be_length << VAR_2);
 VAR_4 = FUNC_1(VAR_4, 0LL);
 *VAR_4++ = FUNC_0(VAR_1);
 return VAR_4;
}
