
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw68_dev {unsigned int input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 struct tw68_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct tw68_dev *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5 >= VAR_2)
  return -VAR_0;
 VAR_6->input = VAR_5;
 FUNC_0(VAR_1, 0x03 << 2, VAR_6->input << 2);
 return 0;
}
