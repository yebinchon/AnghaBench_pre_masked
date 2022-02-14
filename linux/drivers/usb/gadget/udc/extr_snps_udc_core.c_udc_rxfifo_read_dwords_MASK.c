
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udc {int rxfifo; } ;


 int FUNC_0 (struct udc*,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct udc *VAR_0, u32 *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, "udc_read_dwords(): %d dwords\n", VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  *(VAR_1 + VAR_3) = FUNC_1(VAR_0->rxfifo);
 return 0;
}
