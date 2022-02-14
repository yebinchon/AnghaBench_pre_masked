
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_replay {int rp_mutex; int rp_ibuf; int rp_buf; scalar_t__ rp_buflen; int rp_status; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct nfs4_replay *VAR_1)
{
 VAR_1->rp_status = VAR_0;
 VAR_1->rp_buflen = 0;
 VAR_1->rp_buf = VAR_1->rp_ibuf;
 FUNC_0(&VAR_1->rp_mutex);
}
