
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,unsigned long) ;
 unsigned long FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,unsigned long,unsigned long,unsigned long*,struct buffer_head**) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
           __u64 VAR_2, __u64 VAR_3,
           __u64 *VAR_4,
           struct buffer_head **VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_2 > VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 VAR_7 = FUNC_1(VAR_1, VAR_3);

 VAR_9 = FUNC_2(VAR_1, VAR_6, VAR_7, &VAR_8, VAR_5);
 if (!VAR_9)
  *VAR_4 = (VAR_8 == VAR_6) ? VAR_2 :
   FUNC_0(VAR_1, VAR_8);
 return VAR_9;
}
