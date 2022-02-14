
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
      struct buffer_head **VAR_1,
      struct buffer_head *VAR_2)
{
 int VAR_3;

 if (VAR_2) {


  *VAR_1 = VAR_2;
  FUNC_0(*VAR_1);

  return 0;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 < 0)
  FUNC_1(VAR_3);

 return VAR_3;
}
