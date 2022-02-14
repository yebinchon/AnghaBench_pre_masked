
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cphy {int count; int bmsr; int elmer_gpo; int act_count; int act_on; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct cphy*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct cphy *VAR_9)
{
 u32 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 adapter_t *VAR_14;
 VAR_14 = VAR_9->adapter;

 if (VAR_9->count == 50) {
  FUNC_1(VAR_9, VAR_1, VAR_2, &VAR_10);
  VAR_11 = (u16) VAR_10;
  VAR_12 = VAR_9->bmsr ^ VAR_11;

  if (VAR_12 & VAR_3)
   FUNC_4(VAR_14, 0);
  VAR_9->bmsr = VAR_11;




  VAR_9->count = 0;
 }

 FUNC_6(VAR_14, FUNC_0(VAR_5),
  VAR_4);
 FUNC_5(VAR_14,
  FUNC_0(VAR_6), &VAR_13);
 FUNC_5(VAR_14,
  FUNC_0(VAR_7), &VAR_10);
 VAR_13 += VAR_10;


 FUNC_5(VAR_14, VAR_0, &VAR_10);
 VAR_9->elmer_gpo = VAR_10;

 if ( (VAR_10 & (1 << 8)) || (VAR_10 & (1 << 19)) ||
      (VAR_9->act_count == VAR_13) || VAR_9->act_on ) {
  if (FUNC_2(VAR_14))
   VAR_10 |= (1 << 9);
  else if (FUNC_3(VAR_14))
   VAR_10 |= (1 << 20);
  VAR_9->act_on = 0;
 } else {
  if (FUNC_2(VAR_14))
   VAR_10 &= ~(1 << 9);
  else if (FUNC_3(VAR_14))
   VAR_10 &= ~(1 << 20);
  VAR_9->act_on = 1;
 }

 FUNC_6(VAR_14, VAR_0, VAR_10);

 VAR_9->elmer_gpo = VAR_10;
 VAR_9->act_count = VAR_13;
 VAR_9->count++;

 return VAR_8;
}
