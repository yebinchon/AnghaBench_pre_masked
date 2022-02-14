
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct bnx2 *VAR_11)
{
 u16 *VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 VAR_12 = FUNC_4(512, sizeof(u16), VAR_10);
 if (!VAR_12)
  return -VAR_9;

 FUNC_0(VAR_11, VAR_0,
  VAR_1);

 VAR_13 = 0;


 VAR_14 = FUNC_1(VAR_11, VAR_7);
 while (VAR_14 & VAR_8) {
  FUNC_2(VAR_11, VAR_2,
    VAR_3);

  VAR_14 = FUNC_1(VAR_11, VAR_4);

  VAR_14 &= VAR_5;


  if (!(VAR_14 & (1 << 9))) {
   VAR_12[VAR_13] = (u16) VAR_14;
   VAR_13++;
  }

  VAR_14 = FUNC_1(VAR_11, VAR_7);
 }



 while (VAR_13) {
  VAR_13--;

  VAR_14 = VAR_12[VAR_13];
  VAR_14 = (VAR_14 << 9) | VAR_14 | 1;

  FUNC_2(VAR_11, VAR_6, VAR_14);
 }
 FUNC_3(VAR_12);
 return 0;
}
