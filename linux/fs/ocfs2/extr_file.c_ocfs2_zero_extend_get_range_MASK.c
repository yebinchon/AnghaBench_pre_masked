
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_clustersize_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3,
           struct buffer_head *VAR_4,
           u64 VAR_5, u64 VAR_6,
           u64 *VAR_7, u64 *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13 =
  VAR_5 >> FUNC_0(VAR_3->i_sb)->s_clustersize_bits;
 u32 VAR_14 = FUNC_2(VAR_3->i_sb, VAR_6);
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;

 while (VAR_13 < VAR_14) {
  VAR_9 = FUNC_4(VAR_3, VAR_13, &VAR_11,
     &VAR_15, &VAR_16);
  if (VAR_9) {
   FUNC_1(VAR_9);
   goto out;
  }

  if (VAR_11 && !(VAR_16 & VAR_1)) {
   VAR_12 = VAR_15;
   if (VAR_16 & VAR_0)
    VAR_10 = 1;
   break;
  }

  VAR_13 += VAR_15;
 }
 if (!VAR_12) {
  *VAR_8 = 0;
  goto out;
 }

 while ((VAR_13 + VAR_12) < VAR_14) {
  VAR_9 = FUNC_4(VAR_3, VAR_13 + VAR_12,
     &VAR_11, &VAR_15,
     &VAR_16);
  if (VAR_9) {
   FUNC_1(VAR_9);
   goto out;
  }

  if (!VAR_11 || (VAR_16 & VAR_1))
   break;
  if (VAR_16 & VAR_0)
   VAR_10 = 1;
  VAR_12 += VAR_15;
 }
 if ((VAR_13 + VAR_12) > VAR_14)
  VAR_12 = VAR_14 - VAR_13;

 if (VAR_10) {
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_13,
     VAR_12, VAR_2);
  if (VAR_9) {
   FUNC_1(VAR_9);
   goto out;
  }
 }

 *VAR_7 = FUNC_3(VAR_3->i_sb, VAR_13);
 *VAR_8 = FUNC_3(VAR_3->i_sb,
          VAR_13 + VAR_12);

out:
 return VAR_9;
}
