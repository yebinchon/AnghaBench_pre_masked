
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdio_func {scalar_t__ tmpbuf; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdio_func*,unsigned int,scalar_t__,int) ;

void FUNC_2(struct sdio_func *VAR_0, u32 VAR_1, unsigned int VAR_2, int *VAR_3)
{
 int VAR_4;

 *(__le32 *)VAR_0->tmpbuf = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_0->tmpbuf, 4);
 if (VAR_3)
  *VAR_3 = VAR_4;
}
