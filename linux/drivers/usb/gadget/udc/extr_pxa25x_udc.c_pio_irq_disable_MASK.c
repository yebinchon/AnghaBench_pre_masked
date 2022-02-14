
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa25x_ep {int bEndpointAddress; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pxa25x_ep *VAR_2)
{
 u32 VAR_3 = VAR_2->bEndpointAddress & 0xf;

        if (VAR_3 < 8)
                FUNC_1(VAR_2->dev, VAR_0, FUNC_0(VAR_2->dev, VAR_0) |
      (1 << VAR_3));
        else {
                VAR_3 -= 8;
                FUNC_1(VAR_2->dev, VAR_1, FUNC_0(VAR_2->dev, VAR_1) |
      (1 << VAR_3));
        }
}
