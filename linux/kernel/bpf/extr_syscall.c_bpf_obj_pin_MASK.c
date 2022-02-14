
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ file_flags; int pathname; int bpf_fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const union bpf_attr *VAR_2)
{
 if (FUNC_0(VAR_0) || VAR_2->file_flags != 0)
  return -VAR_1;

 return FUNC_1(VAR_2->bpf_fd, FUNC_2(VAR_2->pathname));
}
