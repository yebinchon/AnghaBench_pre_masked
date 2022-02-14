
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct libipw_txb {int nr_frags; int frag_size; int * fragments; } ;
typedef int gfp_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct libipw_txb*) ;
 struct libipw_txb* FUNC_3 (int,int ) ;
 int FUNC_4 (struct libipw_txb*,int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct libipw_txb *FUNC_7(int VAR_0, int VAR_1,
       int VAR_2, gfp_t VAR_3)
{
 struct libipw_txb *VAR_4;
 int VAR_5;
 VAR_4 = FUNC_3(sizeof(struct libipw_txb) + (sizeof(u8 *) * VAR_0),
        VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(VAR_4, 0, sizeof(struct libipw_txb));
 VAR_4->nr_frags = VAR_0;
 VAR_4->frag_size = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->fragments[VAR_5] = FUNC_0(VAR_1 + VAR_2,
          VAR_3);
  if (FUNC_6(!VAR_4->fragments[VAR_5])) {
   VAR_5--;
   break;
  }
  FUNC_5(VAR_4->fragments[VAR_5], VAR_2);
 }
 if (FUNC_6(VAR_5 != VAR_0)) {
  while (VAR_5 >= 0)
   FUNC_1(VAR_4->fragments[VAR_5--]);
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
