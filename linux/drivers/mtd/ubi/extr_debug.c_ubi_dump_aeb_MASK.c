
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ainf_peb {int sqnum; int scrub; int lnum; int pnum; int ec; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(const struct ubi_ainf_peb *VAR_0, int VAR_1)
{
 FUNC_0("eraseblock attaching information dump:\n");
 FUNC_0("\tec       %d\n", VAR_0->ec);
 FUNC_0("\tpnum     %d\n", VAR_0->pnum);
 if (VAR_1 == 0) {
  FUNC_0("\tlnum     %d\n", VAR_0->lnum);
  FUNC_0("\tscrub    %d\n", VAR_0->scrub);
  FUNC_0("\tsqnum    %llu\n", VAR_0->sqnum);
 }
}
