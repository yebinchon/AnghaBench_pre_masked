
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fst_port_info {size_t rxpos; int run; } ;
struct fst_card_info {int nports; int card_no; int dmarx_in_progress; struct fst_port_info* ports; } ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fst_card_info*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct fst_card_info*,struct fst_port_info*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fst_card_info *VAR_6)
{
 struct fst_port_info *VAR_7;
 int VAR_8;
 int VAR_9 = 0;


 FUNC_1(VAR_0, "do_bottom_half_rx\n");
 for (VAR_8 = 0, VAR_7 = VAR_6->ports; VAR_8 < VAR_6->nports; VAR_8++, VAR_7++) {
  if (!VAR_7->run)
   continue;

  while (!(FUNC_0(VAR_6, VAR_5[VAR_8][VAR_7->rxpos].bits)
    & VAR_1) && !(VAR_6->dmarx_in_progress)) {
   if (VAR_9 > VAR_3) {




    FUNC_3(&VAR_4, VAR_6->card_no);
    FUNC_4(&VAR_2);
    break;
   }
   FUNC_2(VAR_6, VAR_7);
   VAR_9++;
  }
 }
}
