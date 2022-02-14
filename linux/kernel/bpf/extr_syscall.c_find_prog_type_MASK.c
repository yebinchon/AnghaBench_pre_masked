
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog_ops {int dummy; } ;
struct bpf_prog {int type; TYPE_1__* aux; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
struct TYPE_2__ {struct bpf_prog_ops const* ops; } ;


 int FUNC_0 (struct bpf_prog_ops**) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 struct bpf_prog_ops const VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 struct bpf_prog_ops** VAR_2 ;

__attribute__((used)) static int FUNC_3(enum bpf_prog_type VAR_3, struct bpf_prog *VAR_4)
{
 const struct bpf_prog_ops *VAR_5;

 if (VAR_3 >= FUNC_0(VAR_2))
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_3, FUNC_0(VAR_2));
 VAR_5 = VAR_2[VAR_3];
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_2(VAR_4->aux))
  VAR_4->aux->ops = VAR_5;
 else
  VAR_4->aux->ops = &VAR_1;
 VAR_4->type = VAR_3;
 return 0;
}
