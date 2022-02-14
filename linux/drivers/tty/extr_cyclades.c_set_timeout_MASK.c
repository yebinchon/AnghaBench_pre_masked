
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclades_port {struct cyclades_card* card; } ;
struct cyclades_card {int card_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyclades_card*) ;
 int FUNC_1 (struct cyclades_port*,int ,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct cyclades_port *VAR_1, unsigned long VAR_2)
{
 struct cyclades_card *VAR_3 = VAR_1->card;
 unsigned long VAR_4;

 if (!FUNC_0(VAR_3)) {
  FUNC_2(&VAR_3->card_lock, VAR_4);
  FUNC_1(VAR_1, VAR_0, VAR_2 & 0xff);
  FUNC_3(&VAR_3->card_lock, VAR_4);
 }
 return 0;
}
