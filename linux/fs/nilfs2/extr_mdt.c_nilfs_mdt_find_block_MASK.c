
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef unsigned long __u64 ;
struct TYPE_2__ {int i_bmap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,unsigned long,unsigned long*) ;
 int FUNC_2 (struct inode*,unsigned long,int,struct buffer_head**) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct inode *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long *VAR_5,
    struct buffer_head **VAR_6)
{
 __u64 VAR_7;
 int VAR_8;

 if (FUNC_3(VAR_3 > VAR_4))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2, VAR_3, 1, VAR_6);
 if (!VAR_8) {
  *VAR_5 = VAR_3;
  goto out;
 }
 if (FUNC_3(VAR_8 != -VAR_0 || VAR_3 == VAR_1))
  goto out;

 VAR_8 = FUNC_1(FUNC_0(VAR_2)->i_bmap, VAR_3 + 1, &VAR_7);
 if (!VAR_8) {
  if (VAR_7 <= VAR_4) {
   VAR_8 = FUNC_2(VAR_2, VAR_7, 1, VAR_6);
   if (!VAR_8)
    *VAR_5 = VAR_7;
  } else {
   VAR_8 = -VAR_0;
  }
 }
out:
 return VAR_8;
}
