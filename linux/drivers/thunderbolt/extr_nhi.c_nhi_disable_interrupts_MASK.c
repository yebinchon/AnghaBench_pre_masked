
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tb_nhi*) ;
 int FUNC_1 (struct tb_nhi*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tb_nhi *VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  FUNC_3(0, VAR_2->iobase + VAR_0 + 4 * VAR_3);


 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++)
  FUNC_2(VAR_2->iobase + VAR_1 + 4 * VAR_3);
}
