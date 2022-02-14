
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int * b_private; } ;
typedef int sector_t ;
typedef int ext4_io_end_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int ) ;
 int * FUNC_3 (struct inode*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
  sector_t VAR_4, struct buffer_head *VAR_5, int VAR_6)
{
 int VAR_7;


 FUNC_0(FUNC_4());

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5,
       VAR_1);
 if (!VAR_7 && FUNC_1(VAR_5)) {
  if (!VAR_5->b_private) {
   ext4_io_end_t *VAR_8;

   VAR_8 = FUNC_3(VAR_3, VAR_2);
   if (!VAR_8)
    return -VAR_0;
   VAR_5->b_private = VAR_8;
   FUNC_5(VAR_3, VAR_8);
  }
  FUNC_6(VAR_5);
 }

 return VAR_7;
}
