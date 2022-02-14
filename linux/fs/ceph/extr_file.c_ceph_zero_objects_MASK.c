
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int stripe_unit; int stripe_count; int object_size; } ;
struct ceph_inode_info {TYPE_1__ i_layout; } ;
typedef int s32 ;
typedef scalar_t__ loff_t ;


 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, loff_t VAR_1, loff_t VAR_2)
{
 int VAR_3 = 0;
 struct ceph_inode_info *VAR_4 = FUNC_0(VAR_0);
 s32 VAR_5 = VAR_4->i_layout.stripe_unit;
 s32 VAR_6 = VAR_4->i_layout.stripe_count;
 s32 VAR_7 = VAR_4->i_layout.object_size;
 u64 VAR_8 = VAR_7 * VAR_6;
 u64 VAR_9, VAR_10;


 VAR_9 = VAR_1 + VAR_8 - 1;
 VAR_10 = VAR_9;
 VAR_9 -= FUNC_2(VAR_10, VAR_8);

 while (VAR_2 && VAR_1 < VAR_9) {
  loff_t VAR_11 = VAR_2;
  VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_11);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_1 += VAR_11;
  VAR_2 -= VAR_11;
 }
 while (VAR_2 >= VAR_8) {
  int VAR_12;
  loff_t VAR_13 = VAR_1;
  for (VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12) {
   VAR_3 = FUNC_1(VAR_0, VAR_13, ((void*)0));
   if (VAR_3 < 0)
    return VAR_3;
   VAR_13 += VAR_5;
  }
  VAR_1 += VAR_8;
  VAR_2 -= VAR_8;
 }
 while (VAR_2) {
  loff_t VAR_14 = VAR_2;
  VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_14);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_1 += VAR_14;
  VAR_2 -= VAR_14;
 }
 return VAR_3;
}
