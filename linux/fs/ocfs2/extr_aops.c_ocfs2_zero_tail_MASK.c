
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct buffer_head*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct buffer_head *VAR_1,
      loff_t VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(!FUNC_3(FUNC_1(VAR_0->i_sb)));
 if (VAR_2 > FUNC_2(VAR_0))
  VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
