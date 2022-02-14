
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nsp_gpio*,int ,int ,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct nsp_gpio *VAR_3, unsigned VAR_4,
         bool *VAR_5, bool *VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(&VAR_3->lock, VAR_7);
 *VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_2, VAR_4);
 *VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_4);
 FUNC_2(&VAR_3->lock, VAR_7);
}
