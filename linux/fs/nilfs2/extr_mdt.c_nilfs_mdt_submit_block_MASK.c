
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; int i_mapping; } ;
struct buffer_head {int b_page; int b_end_io; } ;
typedef int sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int i_bmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,int ,int ) ;
 int FUNC_6 (int ,unsigned long,scalar_t__*) ;
 struct buffer_head* FUNC_7 (struct inode*,int ,unsigned long,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,struct buffer_head*) ;
 int FUNC_10 (struct inode*,int ,unsigned long,int) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct inode *VAR_5, unsigned long VAR_6,
         int VAR_7, int VAR_8, struct buffer_head **VAR_9)
{
 struct buffer_head *VAR_10;
 __u64 VAR_11 = 0;
 int VAR_12 = -VAR_2;

 VAR_10 = FUNC_7(VAR_5, VAR_5->i_mapping, VAR_6, 0);
 if (FUNC_12(!VAR_10))
  goto failed;

 VAR_12 = -VAR_1;
 if (FUNC_2(VAR_10))
  goto out;

 if (VAR_8 & VAR_3) {
  if (!FUNC_11(VAR_10)) {
   VAR_12 = -VAR_0;
   goto failed_bh;
  }
 } else
  FUNC_4(VAR_10);

 if (FUNC_2(VAR_10)) {
  FUNC_13(VAR_10);
  goto out;
 }

 VAR_12 = FUNC_6(FUNC_0(VAR_5)->i_bmap, VAR_6, &VAR_11);
 if (FUNC_12(VAR_12)) {
  FUNC_13(VAR_10);
  goto failed_bh;
 }
 FUNC_5(VAR_10, VAR_5->i_sb, (sector_t)VAR_11);

 VAR_10->b_end_io = VAR_4;
 FUNC_3(VAR_10);
 FUNC_9(VAR_7, VAR_8, VAR_10);
 VAR_12 = 0;

 FUNC_10(VAR_5, VAR_5->i_ino, VAR_6, VAR_7);
 out:
 FUNC_3(VAR_10);
 *VAR_9 = VAR_10;

 failed_bh:
 FUNC_14(VAR_10->b_page);
 FUNC_8(VAR_10->b_page);
 FUNC_1(VAR_10);
 failed:
 return VAR_12;
}
