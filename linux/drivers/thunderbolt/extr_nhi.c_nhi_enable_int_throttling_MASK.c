
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tb_nhi {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tb_nhi *VAR_3)
{

 u32 VAR_4 = FUNC_0(128 * VAR_1, 256);
 unsigned int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  u32 VAR_6 = VAR_2 + VAR_5 * 4;
  FUNC_1(VAR_4, VAR_3->iobase + VAR_6);
 }
}
