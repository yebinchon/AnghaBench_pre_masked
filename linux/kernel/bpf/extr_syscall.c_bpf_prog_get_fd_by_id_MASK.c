
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int prog_id; } ;
typedef int u32 ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_prog* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (struct bpf_prog*) ;
 int FUNC_6 (struct bpf_prog*) ;
 int FUNC_7 (int ) ;
 struct bpf_prog* FUNC_8 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(const union bpf_attr *VAR_7)
{
 struct bpf_prog *VAR_8;
 u32 VAR_9 = VAR_7->prog_id;
 int VAR_10;

 if (FUNC_0(VAR_0))
  return -VAR_2;

 if (!FUNC_7(VAR_1))
  return -VAR_4;

 FUNC_9(&VAR_6);
 VAR_8 = FUNC_8(&VAR_5, VAR_9);
 if (VAR_8)
  VAR_8 = FUNC_4(VAR_8);
 else
  VAR_8 = FUNC_1(-VAR_3);
 FUNC_10(&VAR_6);

 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0)
  FUNC_6(VAR_8);

 return VAR_10;
}
