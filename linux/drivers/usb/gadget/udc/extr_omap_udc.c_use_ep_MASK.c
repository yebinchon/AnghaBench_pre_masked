
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_ep {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_ep *VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_3->bEndpointAddress & 0x0f;

 if (VAR_3->bEndpointAddress & VAR_2)
  VAR_5 |= VAR_0;
 FUNC_0(VAR_5 | VAR_4, VAR_1);

}
