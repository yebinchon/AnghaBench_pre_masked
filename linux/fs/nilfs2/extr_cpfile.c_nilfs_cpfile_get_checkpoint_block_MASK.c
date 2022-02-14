
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ,int,int ,struct buffer_head**) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1,
          __u64 VAR_2,
          int VAR_3,
          struct buffer_head **VAR_4)
{
 return FUNC_1(VAR_1,
       FUNC_0(VAR_1, VAR_2),
       VAR_3, VAR_0, VAR_4);
}
