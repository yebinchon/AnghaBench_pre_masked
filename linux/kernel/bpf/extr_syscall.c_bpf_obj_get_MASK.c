
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ bpf_fd; int file_flags; int pathname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const union bpf_attr *VAR_3)
{
 if (FUNC_0(VAR_0) || VAR_3->bpf_fd != 0 ||
     VAR_3->file_flags & ~VAR_1)
  return -VAR_2;

 return FUNC_1(FUNC_2(VAR_3->pathname),
    VAR_3->file_flags);
}
