
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcfb_par {int dummy; } ;


 int FUNC_0 (struct arcfb_par*,unsigned int,int ) ;
 int FUNC_1 (struct arcfb_par*,unsigned int,int) ;
 int FUNC_2 (struct arcfb_par*,unsigned int,unsigned char) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct arcfb_par *VAR_1, unsigned int VAR_2)
{
 int VAR_3,VAR_4;

 for (VAR_3 = 0; VAR_3 <= 8; VAR_3++) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_1, VAR_2, 0);
  for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
   FUNC_2(VAR_1, VAR_2,
    (unsigned char) VAR_0);
  }
 }
}
