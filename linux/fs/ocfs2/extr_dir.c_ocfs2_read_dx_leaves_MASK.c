
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

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, u64 VAR_2, int VAR_3,
    struct buffer_head **VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_1), VAR_2, VAR_3, VAR_4, 0,
    VAR_0);
 if (VAR_5)
  FUNC_1(VAR_5);

 return VAR_5;
}
