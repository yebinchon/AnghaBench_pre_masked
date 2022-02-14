
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct bfa_cee_stats_s {int dummy; } ;
struct TYPE_4__ {int pa; int * kva; } ;
struct TYPE_3__ {int pa; int * kva; } ;
struct bfa_cee_s {struct bfa_cee_stats_s* stats; struct bfa_cee_attr_s* attr; TYPE_2__ stats_dma; TYPE_1__ attr_dma; } ;
struct bfa_cee_attr_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

void
FUNC_1(struct bfa_cee_s *VAR_1, u8 *VAR_2, u64 VAR_3)
{
 VAR_1->attr_dma.kva = VAR_2;
 VAR_1->attr_dma.pa = VAR_3;
 VAR_1->stats_dma.kva = VAR_2 + FUNC_0(
        sizeof(struct bfa_cee_attr_s), VAR_0);
 VAR_1->stats_dma.pa = VAR_3 + FUNC_0(
        sizeof(struct bfa_cee_attr_s), VAR_0);
 VAR_1->attr = (struct bfa_cee_attr_s *) VAR_2;
 VAR_1->stats = (struct bfa_cee_stats_s *) (VAR_2 + FUNC_0(
   sizeof(struct bfa_cee_attr_s), VAR_0));
}
