
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 (struct inode*,unsigned char*,int ) ;

int
FUNC_5(
 struct inode *VAR_1,
 unsigned char *VAR_2,
 uint32_t VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_1) || FUNC_0(VAR_1))
  return -VAR_0;
 VAR_4 = FUNC_3(FUNC_2(VAR_1), VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_4(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
