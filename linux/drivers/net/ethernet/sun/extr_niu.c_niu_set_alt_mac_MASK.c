
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u16 ;
struct niu {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_2, int VAR_3, unsigned char *VAR_4)
{
 u16 VAR_5 = VAR_4[4] << 8 | VAR_4[5];
 u16 VAR_6 = VAR_4[2] << 8 | VAR_4[3];
 u16 VAR_7 = VAR_4[0] << 8 | VAR_4[1];

 if (VAR_3 >= FUNC_6(VAR_2))
  return -VAR_0;

 if (VAR_2->flags & VAR_1) {
  FUNC_7(FUNC_3(VAR_3), VAR_5);
  FUNC_7(FUNC_4(VAR_3), VAR_6);
  FUNC_7(FUNC_5(VAR_3), VAR_7);
 } else {
  FUNC_7(FUNC_0(VAR_3), VAR_5);
  FUNC_7(FUNC_1(VAR_3), VAR_6);
  FUNC_7(FUNC_2(VAR_3), VAR_7);
 }

 return 0;
}
