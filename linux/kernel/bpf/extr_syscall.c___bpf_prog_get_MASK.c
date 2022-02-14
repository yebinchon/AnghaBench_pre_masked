
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fd {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 struct bpf_prog* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (struct fd) ;
 int FUNC_3 (struct bpf_prog*,int*,int) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 struct fd FUNC_5 (int ) ;
 int FUNC_6 (struct fd) ;

__attribute__((used)) static struct bpf_prog *FUNC_7(u32 VAR_1, enum bpf_prog_type *VAR_2,
           bool VAR_3)
{
 struct fd VAR_4 = FUNC_5(VAR_1);
 struct bpf_prog *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;
 if (!FUNC_3(VAR_5, VAR_2, VAR_3)) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_5 = FUNC_4(VAR_5);
out:
 FUNC_6(VAR_4);
 return VAR_5;
}
