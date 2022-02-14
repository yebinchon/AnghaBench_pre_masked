
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,struct buffer_head**,int ,int ) ;
 int VAR_0 ;

int FUNC_3(struct inode *VAR_1, u64 VAR_2,
    struct buffer_head **VAR_3)
{
 int VAR_4;

 *VAR_3 = ((void*)0);
 VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_2, 1, VAR_3, 0,
          VAR_0);
 if (VAR_4)
  FUNC_1(VAR_4);
 return VAR_4;
}
