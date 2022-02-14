
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct bpf_prog {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 struct bpf_prog* FUNC_0 (int) ;
 int FUNC_1 (struct bpf_prog*) ;
 int VAR_0 ;
 struct bpf_prog* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int ,struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct path*) ;

struct bpf_prog *FUNC_7(const char *VAR_1, enum bpf_prog_type VAR_2)
{
 struct bpf_prog *VAR_3;
 struct path VAR_4;
 int VAR_5 = FUNC_4(VAR_1, VAR_0, &VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);
 VAR_3 = FUNC_2(FUNC_3(VAR_4.dentry), VAR_2);
 if (!FUNC_1(VAR_3))
  FUNC_6(&VAR_4);
 FUNC_5(&VAR_4);
 return VAR_3;
}
