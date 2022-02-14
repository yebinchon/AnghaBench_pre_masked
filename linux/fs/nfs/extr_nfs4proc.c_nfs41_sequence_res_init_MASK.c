
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_sequence_res {int sr_status; scalar_t__ sr_status_flags; int sr_timestamp; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nfs4_sequence_res *VAR_1)
{
 VAR_1->sr_timestamp = VAR_0;
 VAR_1->sr_status_flags = 0;
 VAR_1->sr_status = 1;
}
