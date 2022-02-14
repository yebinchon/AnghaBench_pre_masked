
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {scalar_t__ tx_bytes; struct gsm_dlci** dlci; } ;
struct gsm_dlci {int adaption; int net; scalar_t__ constipated; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gsm_mux*,struct gsm_dlci*) ;
 int FUNC_1 (struct gsm_mux*,struct gsm_dlci*) ;

__attribute__((used)) static void FUNC_2(struct gsm_mux *VAR_2)
{
 int VAR_3;

 int VAR_4 = 1;

 while (VAR_4 < VAR_0) {
  struct gsm_dlci *VAR_5;

  if (VAR_2->tx_bytes > VAR_1)
   break;
  VAR_5 = VAR_2->dlci[VAR_4];
  if (VAR_5 == ((void*)0) || VAR_5->constipated) {
   VAR_4++;
   continue;
  }
  if (VAR_5->adaption < 3 && !VAR_5->net)
   VAR_3 = FUNC_0(VAR_2, VAR_5);
  else
   VAR_3 = FUNC_1(VAR_2, VAR_5);
  if (VAR_3 < 0)
   break;

  if (VAR_3 == 0)
   VAR_4++;
 }
}
