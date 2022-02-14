
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_mux {int mtu; int ftype; } ;
struct gsm_msg {int * data; } ;
struct gsm_dlci {int adaption; int lock; int fifo; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gsm_dlci*,struct gsm_msg*) ;
 struct gsm_msg* FUNC_2 (struct gsm_mux*,int ,int,int ) ;
 int FUNC_3 (struct gsm_dlci*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_6(struct gsm_mux *VAR_1, struct gsm_dlci *VAR_2)
{
 struct gsm_msg *VAR_3;
 u8 *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = VAR_2->adaption - 1;

 VAR_6 = 0;
 while (1) {
  VAR_5 = FUNC_4(VAR_2->fifo);
  if (VAR_5 == 0)
   return VAR_6;


  if (VAR_5 > VAR_1->mtu)
   VAR_5 = VAR_1->mtu;

  VAR_7 = VAR_5 + VAR_8;

  VAR_3 = FUNC_2(VAR_1, VAR_2->addr, VAR_7, VAR_1->ftype);


  if (VAR_3 == ((void*)0))
   return -VAR_0;
  VAR_4 = VAR_3->data;
  switch (VAR_2->adaption) {
  case 1:
   break;
  case 2:

   *VAR_4++ = FUNC_3(VAR_2);
   break;
  }
  FUNC_0(FUNC_5(VAR_2->fifo, VAR_4 , VAR_5, &VAR_2->lock) != VAR_5);
  FUNC_1(VAR_2, VAR_3);
  VAR_6 += VAR_7;
 }

 return VAR_6;
}
