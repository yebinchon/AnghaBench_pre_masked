
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct b43_dmaring {int frameoffset; } ;



__attribute__((used)) static bool FUNC_0(struct b43_dmaring *VAR_0, struct sk_buff *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->data + VAR_0->frameoffset;

 return ((VAR_2[0] & VAR_2[1] & VAR_2[2] & VAR_2[3] & VAR_2[4] & VAR_2[5] & VAR_2[6] & VAR_2[7]) == 0xFF);
}
