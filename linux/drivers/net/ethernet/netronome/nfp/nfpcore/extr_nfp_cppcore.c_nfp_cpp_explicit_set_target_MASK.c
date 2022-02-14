
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_2__ {void* byte_mask; void* len; int cpp_id; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;



int FUNC_0(struct nfp_cpp_explicit *VAR_0,
    u32 VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_0->cmd.cpp_id = VAR_1;
 VAR_0->cmd.len = VAR_2;
 VAR_0->cmd.byte_mask = VAR_3;

 return 0;
}
