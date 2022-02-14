
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int posted; int siga_mode; int sigb_mode; void* sigb; void* siga; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;
typedef enum nfp_cpp_explicit_signal_mode { ____Placeholder_nfp_cpp_explicit_signal_mode } nfp_cpp_explicit_signal_mode ;



int FUNC_0(struct nfp_cpp_explicit *VAR_0, int VAR_1,
    u8 VAR_2,
    enum nfp_cpp_explicit_signal_mode VAR_3,
    u8 VAR_4,
    enum nfp_cpp_explicit_signal_mode VAR_5)
{
 VAR_0->cmd.posted = VAR_1;
 VAR_0->cmd.siga = VAR_2;
 VAR_0->cmd.sigb = VAR_4;
 VAR_0->cmd.siga_mode = VAR_3;
 VAR_0->cmd.sigb_mode = VAR_5;

 return 0;
}
