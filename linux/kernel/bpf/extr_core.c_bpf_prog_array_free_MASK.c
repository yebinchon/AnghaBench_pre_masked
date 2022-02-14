
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog_array {int dummy; } ;
struct TYPE_2__ {struct bpf_prog_array hdr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct bpf_prog_array*,int ) ;
 int VAR_1 ;

void FUNC_1(struct bpf_prog_array *VAR_2)
{
 if (!VAR_2 || VAR_2 == &VAR_0.hdr)
  return;
 FUNC_0(VAR_2, VAR_1);
}
