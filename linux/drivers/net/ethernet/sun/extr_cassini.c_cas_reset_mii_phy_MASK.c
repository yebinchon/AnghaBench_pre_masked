
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cas*,int ) ;
 int FUNC_1 (struct cas*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cas *VAR_3)
{
 int VAR_4 = VAR_2;
 u16 VAR_5;

 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_2(100);
 while (--VAR_4) {
  VAR_5 = FUNC_0(VAR_3, VAR_1);
  if ((VAR_5 & VAR_0) == 0)
   break;
  FUNC_2(10);
 }
 return VAR_4 <= 0;
}
