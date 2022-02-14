
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {void* signal_ref; void* signal_master; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;



int FUNC_0(struct nfp_cpp_explicit *VAR_0,
    u8 VAR_1, u8 VAR_2)
{
 VAR_0->cmd.signal_master = VAR_1;
 VAR_0->cmd.signal_ref = VAR_2;

 return 0;
}
