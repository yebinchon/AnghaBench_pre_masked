
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int nhead_offs; int nhead_lnum; int ihead_offs; int ihead_lnum; scalar_t__ remounting_rw; int ro_mount; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ubifs_info*,int ,int ,void*) ;
 int FUNC_2 (struct ubifs_info*,int) ;

int FUNC_3(struct ubifs_info *VAR_0, void *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_0, !VAR_0->ro_mount || VAR_0->remounting_rw);

 FUNC_0("checking index head at %d:%d", VAR_0->ihead_lnum, VAR_0->ihead_offs);
 VAR_2 = FUNC_1(VAR_0, VAR_0->ihead_lnum, VAR_0->ihead_offs, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0("checking LPT head at %d:%d", VAR_0->nhead_lnum, VAR_0->nhead_offs);

 return FUNC_1(VAR_0, VAR_0->nhead_lnum, VAR_0->nhead_offs, VAR_1);
}
