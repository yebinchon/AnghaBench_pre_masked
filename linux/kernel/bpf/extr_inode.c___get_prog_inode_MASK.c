
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct bpf_prog* i_private; int * i_op; } ;
struct bpf_prog {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bpf_prog*,int*,int) ;
 struct bpf_prog* FUNC_2 (struct bpf_prog*) ;
 int VAR_4 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct bpf_prog*) ;

__attribute__((used)) static struct bpf_prog *FUNC_5(struct inode *VAR_5, enum bpf_prog_type VAR_6)
{
 struct bpf_prog *VAR_7;
 int VAR_8 = FUNC_3(VAR_5, VAR_2);
 if (VAR_8)
  return FUNC_0(VAR_8);

 if (VAR_5->i_op == &VAR_3)
  return FUNC_0(-VAR_1);
 if (VAR_5->i_op != &VAR_4)
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_5->i_private;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 if (!FUNC_1(VAR_7, &VAR_6, 0))
  return FUNC_0(-VAR_1);

 return FUNC_2(VAR_7);
}
