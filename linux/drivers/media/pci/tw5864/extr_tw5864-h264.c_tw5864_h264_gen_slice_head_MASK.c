
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bs {int bits_left; int* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bs*,int*,size_t) ;
 int FUNC_1 (struct bs*) ;
 int FUNC_2 (struct bs*,int ,unsigned int) ;
 int FUNC_3 (struct bs*,int ) ;
 int FUNC_4 (struct bs*,int ) ;
 int FUNC_5 (struct bs*,unsigned int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(u8 *VAR_1, size_t VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          int *VAR_5, u8 *VAR_6)
{
 struct bs VAR_7, *VAR_8;
 int VAR_9 = VAR_4 == 0;

 VAR_8 = &VAR_7;
 FUNC_0(VAR_8, VAR_1, VAR_2);
 FUNC_5(VAR_8, 0);
 FUNC_5(VAR_8, VAR_9 ? 2 : 5);
 FUNC_5(VAR_8, 0);
 FUNC_2(VAR_8, FUNC_6(VAR_0), VAR_4);
 if (VAR_9)
  FUNC_5(VAR_8, VAR_3);


 FUNC_2(VAR_8, FUNC_6(VAR_0), VAR_4);

 if (VAR_9) {
  FUNC_3(VAR_8, 0);
  FUNC_3(VAR_8, 0);
 } else {
  FUNC_3(VAR_8, 0);
  FUNC_3(VAR_8, 0);
  FUNC_3(VAR_8, 0);
 }

 FUNC_4(VAR_8, 0);

 if (VAR_8->bits_left != 8) {
  *VAR_6 = ((VAR_8->ptr[0]) << VAR_8->bits_left);
  *VAR_5 = 8 - VAR_8->bits_left;
 } else {
  *VAR_6 = 0;
  *VAR_5 = 0;
 }

 return FUNC_1(VAR_8);
}
