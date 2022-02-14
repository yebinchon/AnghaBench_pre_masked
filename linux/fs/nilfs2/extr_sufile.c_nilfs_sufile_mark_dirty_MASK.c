
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ,int ,struct buffer_head**) ;

int FUNC_4(struct inode *VAR_0, __u64 VAR_1)
{
 struct buffer_head *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1, 0, &VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_0);
  FUNC_0(VAR_2);
 }
 return VAR_3;
}
