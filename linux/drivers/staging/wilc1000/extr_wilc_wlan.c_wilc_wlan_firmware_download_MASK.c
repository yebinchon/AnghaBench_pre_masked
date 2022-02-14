
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct wilc {TYPE_1__* hif_func; } ;
struct TYPE_2__ {int (* hif_block_tx ) (struct wilc*,size_t,int *,size_t) ;} ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wilc*,int ) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int const*,size_t) ;
 int FUNC_6 (struct wilc*,int ) ;
 int FUNC_7 (struct wilc*,size_t,int *,size_t) ;

int FUNC_8(struct wilc *VAR_4, const u8 *VAR_5,
    u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u8 *VAR_12;
 int VAR_13 = 0;

 VAR_11 = FUNC_0(12);

 VAR_12 = FUNC_4(VAR_11, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_7 = 0;
 do {
  VAR_8 = FUNC_2(&VAR_5[VAR_7]);
  VAR_9 = FUNC_2(&VAR_5[VAR_7 + 4]);
  FUNC_1(VAR_4, VAR_2);
  VAR_7 += 8;
  while (((int)VAR_9) && (VAR_7 < VAR_6)) {
   if (VAR_9 <= VAR_11)
    VAR_10 = VAR_9;
   else
    VAR_10 = VAR_11;

   FUNC_5(VAR_12, &VAR_5[VAR_7], VAR_10);
   VAR_13 = VAR_4->hif_func->hif_block_tx(VAR_4, VAR_8,
          VAR_12, VAR_10);
   if (!VAR_13)
    break;

   VAR_8 += VAR_10;
   VAR_7 += VAR_10;
   VAR_9 -= VAR_10;
  }
  FUNC_6(VAR_4, VAR_3);

  if (!VAR_13) {
   VAR_13 = -VAR_0;
   goto fail;
  }
 } while (VAR_7 < VAR_6);

fail:

 FUNC_3(VAR_12);

 return (VAR_13 < 0) ? VAR_13 : 0;
}
