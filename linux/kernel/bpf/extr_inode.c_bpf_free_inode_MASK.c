
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; int i_link; int i_mode; } ;
typedef enum bpf_type { ____Placeholder_bpf_type } bpf_type ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct inode*,int*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 enum bpf_type VAR_1;

 if (FUNC_0(VAR_0->i_mode))
  FUNC_4(VAR_0->i_link);
 if (!FUNC_2(VAR_0, &VAR_1))
  FUNC_1(VAR_0->i_private, VAR_1);
 FUNC_3(VAR_0);
}
