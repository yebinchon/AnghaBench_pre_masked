
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int peer_nr_direct_mw; int nr_rsvd_luts; } ;



__attribute__((used)) static int FUNC_0(struct switchtec_ntb *VAR_0, int VAR_1)
{
 return VAR_1 - VAR_0->peer_nr_direct_mw + VAR_0->nr_rsvd_luts;
}
