
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int ip_dyn_features; } ;
struct TYPE_3__ {scalar_t__ s_clustersize_bits; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct inode*,struct buffer_head*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_8 (struct inode*,struct buffer_head**) ;
 scalar_t__ FUNC_9 (struct buffer_head*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2,
         u64 VAR_3, u64 VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u64 VAR_10 = VAR_3 + VAR_4;
 struct buffer_head *VAR_11 = ((void*)0);

 if (FUNC_0(VAR_2)->ip_dyn_features & VAR_1) {
  VAR_5 = FUNC_8(VAR_2, &VAR_11);
  if (VAR_5) {
   FUNC_3(VAR_5);
   goto out;
  }





  if (FUNC_9(VAR_11, VAR_10))
   goto out;

  VAR_5 = FUNC_5(VAR_2, VAR_11);
  if (VAR_5) {
   FUNC_3(VAR_5);
   goto out;
  }
 }




 VAR_6 = VAR_3 >> FUNC_1(VAR_2->i_sb)->s_clustersize_bits;
 VAR_8 = FUNC_4(VAR_2->i_sb, VAR_3 + VAR_4);
 VAR_8 -= VAR_6;

 while (VAR_8) {
  VAR_5 = FUNC_7(VAR_2, VAR_6, &VAR_7,
      &VAR_9, ((void*)0));
  if (VAR_5) {
   FUNC_3(VAR_5);
   goto out;
  }





  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;

  if (VAR_7) {




   goto next;
  }

  VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_9, 1);
  if (VAR_5) {
   if (VAR_5 != -VAR_0)
    FUNC_3(VAR_5);
   goto out;
  }

next:
  VAR_6 += VAR_9;
  VAR_8 -= VAR_9;
 }

 VAR_5 = 0;
out:

 FUNC_2(VAR_11);
 return VAR_5;
}
