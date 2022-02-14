
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct nsp_gpio {int lock; scalar_t__ io_ctrl; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nsp_gpio *VAR_2, unsigned VAR_3,
     u16 *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_5 = VAR_1;
 VAR_6 = VAR_3;

 FUNC_1(&VAR_2->lock, VAR_8);
 *VAR_4 = 0;
 for (VAR_9 = (VAR_0 - 1); VAR_9 >= 0; VAR_9--) {
  VAR_7 = FUNC_3(VAR_2->io_ctrl + VAR_5) & FUNC_0(VAR_6);
  VAR_7 >>= VAR_6;
  *VAR_4 += (VAR_7 << VAR_9);
  VAR_5 += 4;
 }


 *VAR_4 = (*VAR_4 + 1) * 2;
 FUNC_2(&VAR_2->lock, VAR_8);

 return 0;
}
