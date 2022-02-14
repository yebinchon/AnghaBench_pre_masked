
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, sector_t VAR_2,
      struct buffer_head *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);
 if (VAR_5)
  return VAR_5;
 if (!FUNC_0(VAR_3))
  return -VAR_0;
 return 0;
}
