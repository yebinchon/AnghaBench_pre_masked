
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct docg3 {TYPE_1__* cascade; } ;
struct TYPE_2__ {int bch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int ,int *,int,int *,int *,int *,int*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct docg3 *VAR_4, void *VAR_5, u8 *VAR_6)
{
 u8 VAR_7[VAR_1];
 int VAR_8[VAR_2], VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_7[VAR_9] = FUNC_1(VAR_6[VAR_9]);
 VAR_10 = FUNC_3(VAR_4->cascade->bch, ((void*)0),
        VAR_0,
        ((void*)0), VAR_7, ((void*)0), VAR_8);
 FUNC_0(VAR_10 == -VAR_3);
 if (VAR_10 < 0)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  VAR_8[VAR_9] = (VAR_8[VAR_9] & ~7) | (7 - (VAR_8[VAR_9] & 7));
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  if (VAR_8[VAR_9] < VAR_0*8)

   FUNC_2(VAR_8[VAR_9], VAR_5);
out:
 FUNC_4("doc_ecc_bch_fix_data: flipped %d bits\n", VAR_10);
 return VAR_10;
}
