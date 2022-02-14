
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
struct lynxfb_crtc {size_t channel; } ;




 int FUNC_0 (unsigned int,int) ;

int FUNC_1(struct lynxfb_crtc *VAR_0, ushort VAR_1,
         ushort VAR_2, ushort VAR_3, ushort VAR_4)
{
 static unsigned int VAR_5[] = {128, 129};

 FUNC_0(VAR_5[VAR_0->channel] + VAR_1 * 4,
        (VAR_2 << 16) | (VAR_3 << 8) | VAR_4);
 return 0;
}
