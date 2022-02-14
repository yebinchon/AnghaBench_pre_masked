
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct esas2r_adapter {int flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct esas2r_adapter*,int ) ;
 int FUNC_1 (struct esas2r_adapter*,int) ;
 int FUNC_2 (struct esas2r_adapter*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

bool FUNC_4(struct esas2r_adapter *VAR_6,
        void *VAR_7,
        u32 VAR_8,
        u32 VAR_9)
{
 u8 *VAR_10 = (u8 *)VAR_7;


 if (!FUNC_0(VAR_6, VAR_2))
  return 0;

 while (VAR_9) {
  u32 VAR_11;
  u32 VAR_12;
  u32 VAR_13;

  if (FUNC_3(VAR_0, &VAR_6->flags2))
   VAR_13 = VAR_4 + (VAR_8 & -VAR_5);
  else
   VAR_13 = VAR_3 + (VAR_8 & -VAR_5);

  FUNC_1(VAR_6, VAR_13);
  VAR_12 = VAR_8 & (VAR_5 - 1);
  VAR_11 = VAR_9;

  if (VAR_11 > VAR_5 - VAR_12)
   VAR_11 = VAR_5 - VAR_12;

  VAR_8 += VAR_11;
  VAR_9 -= VAR_11;

  while (VAR_11--) {
   *VAR_10++ = FUNC_2(VAR_6, VAR_12);
   VAR_12++;
  }
 }


 FUNC_0(VAR_6, VAR_1);
 return 1;
}
