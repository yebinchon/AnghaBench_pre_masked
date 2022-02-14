
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msix_entry {int entry; } ;
struct bfad_s {size_t nvec; TYPE_2__* msix_tab; } ;
struct TYPE_3__ {int entry; } ;
struct TYPE_4__ {struct bfad_s* bfad; TYPE_1__ msix; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct bfad_s *VAR_1, struct msix_entry *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0x00000001;

 for (VAR_5 = 0, VAR_1->nvec = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 & VAR_6) {
   VAR_1->msix_tab[VAR_1->nvec].msix.entry = VAR_5;
   VAR_1->msix_tab[VAR_1->nvec].bfad = VAR_1;
   VAR_2[VAR_1->nvec].entry = VAR_5;
   VAR_1->nvec++;
  }

  VAR_6 <<= 1;
 }

}
