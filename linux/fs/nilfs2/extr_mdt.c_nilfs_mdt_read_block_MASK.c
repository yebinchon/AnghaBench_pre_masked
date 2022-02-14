
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*,unsigned long,int ,int ,struct buffer_head**) ;
 int FUNC_5 (int ,int ,char*,int ,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, unsigned long VAR_8,
    int VAR_9, struct buffer_head **VAR_10)
{
 struct buffer_head *VAR_11, *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15 = VAR_4;
 int VAR_16;

 VAR_16 = FUNC_4(VAR_7, VAR_8, VAR_5, 0, &VAR_11);
 if (VAR_16 == -VAR_1)
  goto out;

 if (FUNC_6(VAR_16))
  goto failed;

 if (VAR_9) {
  VAR_13 = VAR_8 + 1;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++, VAR_13++) {
   VAR_16 = FUNC_4(VAR_7, VAR_13, VAR_5,
           VAR_6, &VAR_12);
   if (FUNC_3(!VAR_16 || VAR_16 == -VAR_1))
    FUNC_0(VAR_12);
   else if (VAR_16 != -VAR_0)
    break;

   if (!FUNC_1(VAR_11))
    goto out_no_wait;
  }
 }

 FUNC_7(VAR_11);

 out_no_wait:
 VAR_16 = -VAR_2;
 if (!FUNC_2(VAR_11)) {
  FUNC_5(VAR_7->i_sb, VAR_3,
     "I/O error reading meta-data file (ino=%lu, block-offset=%lu)",
     VAR_7->i_ino, VAR_8);
  goto failed_bh;
 }
 out:
 *VAR_10 = VAR_11;
 return 0;

 failed_bh:
 FUNC_0(VAR_11);
 failed:
 return VAR_16;
}
