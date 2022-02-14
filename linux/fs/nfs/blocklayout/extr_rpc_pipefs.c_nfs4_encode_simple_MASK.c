
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_sigs; TYPE_1__* sigs; } ;
struct pnfs_block_volume {int type; TYPE_2__ simple; } ;
typedef int __be32 ;
struct TYPE_3__ {int sig_len; int sig; int offset; } ;


 void* FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(__be32 *VAR_0, struct pnfs_block_volume *VAR_1)
{
 int VAR_2;

 *VAR_0++ = FUNC_0(1);
 *VAR_0++ = FUNC_0(VAR_1->type);
 *VAR_0++ = FUNC_0(VAR_1->simple.nr_sigs);
 for (VAR_2 = 0; VAR_2 < VAR_1->simple.nr_sigs; VAR_2++) {
  VAR_0 = FUNC_1(VAR_0, VAR_1->simple.sigs[VAR_2].offset);
  VAR_0 = FUNC_2(VAR_0, VAR_1->simple.sigs[VAR_2].sig,
      VAR_1->simple.sigs[VAR_2].sig_len);
 }
}
