
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmac {unsigned int offset; int adapter; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,int ) ;

void FUNC_2(struct cmac *VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_3->offset + VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_5 += 8) {
  u32 VAR_6 = FUNC_0(VAR_3->adapter, VAR_5);
  FUNC_1(VAR_3->adapter, VAR_5, VAR_6);
 }
 FUNC_0(VAR_3->adapter, VAR_1);
}
