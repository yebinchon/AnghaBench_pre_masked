
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_port_info {size_t index; scalar_t__ start; scalar_t__ txipos; scalar_t__ txpos; struct fst_card_info* card; } ;
struct fst_card_info {int card_lock; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct fst_card_info*,int ) ;
 int FUNC_1 (struct fst_card_info*,int ,unsigned short) ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int ** VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct fst_port_info *VAR_5, unsigned short VAR_6)
{
 struct fst_card_info *VAR_7;
 unsigned short VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_7 = VAR_5->card;
 FUNC_5(&VAR_7->card_lock, VAR_9);
 VAR_8 = FUNC_0(VAR_7, VAR_4[VAR_5->index][0]);

 VAR_10 = 0;

 while (VAR_8 > VAR_2) {
  FUNC_6(&VAR_7->card_lock, VAR_9);
  FUNC_4(1);
  FUNC_5(&VAR_7->card_lock, VAR_9);

  if (++VAR_10 > 2000) {
   FUNC_3("Mailbox safety timeout\n");
   break;
  }

  VAR_8 = FUNC_0(VAR_7, VAR_4[VAR_5->index][0]);
 }
 if (VAR_10 > 0) {
  FUNC_2(VAR_1, "Mailbox clear after %d jiffies\n", VAR_10);
 }
 if (VAR_8 == VAR_2) {
  FUNC_2(VAR_1, "issue_cmd: previous command was NAK'd\n");
 }

 FUNC_1(VAR_7, VAR_4[VAR_5->index][0], VAR_6);

 if (VAR_6 == VAR_0 || VAR_6 == VAR_3) {
  VAR_5->txpos = 0;
  VAR_5->txipos = 0;
  VAR_5->start = 0;
 }

 FUNC_6(&VAR_7->card_lock, VAR_9);
}
