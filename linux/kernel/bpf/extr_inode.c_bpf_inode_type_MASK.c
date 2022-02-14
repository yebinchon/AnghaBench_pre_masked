
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_op; } ;
typedef enum bpf_type { ____Placeholder_bpf_type } bpf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(const struct inode *VAR_6, enum bpf_type *VAR_7)
{
 *VAR_7 = VAR_2;
 if (VAR_6->i_op == &VAR_5)
  *VAR_7 = VAR_1;
 else if (VAR_6->i_op == &VAR_4)
  *VAR_7 = VAR_0;
 else
  return -VAR_3;

 return 0;
}
