
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtllib_txb {int nr_frags; TYPE_1__** fragments; int frag_size; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct rtllib_txb* cb; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct rtllib_txb*) ;
 struct rtllib_txb* FUNC_4 (int,int ) ;
 int FUNC_5 (struct rtllib_txb*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct rtllib_txb *FUNC_7(int VAR_0, int VAR_1,
        gfp_t VAR_2)
{
 struct rtllib_txb *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(sizeof(struct rtllib_txb) + (sizeof(u8 *) * VAR_0),
        VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_5(VAR_3, 0, sizeof(struct rtllib_txb));
 VAR_3->nr_frags = VAR_0;
 VAR_3->frag_size = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->fragments[VAR_4] = FUNC_1(VAR_1);
  if (FUNC_6(!VAR_3->fragments[VAR_4])) {
   VAR_4--;
   break;
  }
  FUNC_5(VAR_3->fragments[VAR_4]->cb, 0, sizeof(VAR_3->fragments[VAR_4]->cb));
 }
 if (FUNC_6(VAR_4 != VAR_0)) {
  while (VAR_4 >= 0)
   FUNC_2(VAR_3->fragments[VAR_4--]);
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
