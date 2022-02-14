
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fst_port_info {int index; scalar_t__ rxpos; struct fst_card_info* card; } ;
struct fst_card_info {int card_lock; } ;
struct TYPE_2__ {int bits; int mcnt; int bcnt; int hadr; int ladr; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fst_card_info*,int ,int ) ;
 int FUNC_2 (struct fst_card_info*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int *** VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct fst_port_info *VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 struct fst_card_info *VAR_10;

 VAR_7 = VAR_5->index;
 VAR_10 = VAR_5->card;
 FUNC_4(&VAR_10->card_lock, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = FUNC_0(VAR_3[VAR_7][VAR_6][0]);

  FUNC_2(VAR_10, VAR_4[VAR_7][VAR_6].ladr, (u16) VAR_8);
  FUNC_1(VAR_10, VAR_4[VAR_7][VAR_6].hadr, (u8) (VAR_8 >> 16));
  FUNC_2(VAR_10, VAR_4[VAR_7][VAR_6].bcnt, FUNC_3(VAR_1));
  FUNC_2(VAR_10, VAR_4[VAR_7][VAR_6].mcnt, VAR_1);
  FUNC_1(VAR_10, VAR_4[VAR_7][VAR_6].bits, VAR_0);
 }
 VAR_5->rxpos = 0;
 FUNC_5(&VAR_10->card_lock, VAR_9);
}
