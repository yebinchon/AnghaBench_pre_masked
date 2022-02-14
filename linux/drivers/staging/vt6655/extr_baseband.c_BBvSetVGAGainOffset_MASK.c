
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {unsigned char* abyBBVGA; unsigned char byBBVGACurrent; scalar_t__ bShortSlotTime; } ;


 int FUNC_0 (struct vnt_private*,int,unsigned char*) ;
 int FUNC_1 (struct vnt_private*,int,unsigned char) ;

void FUNC_2(struct vnt_private *VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2 = 0;

 FUNC_1(VAR_0, 0xE7, VAR_1);

 FUNC_0(VAR_0, 0x0A, &VAR_2);

 if (VAR_1 == VAR_0->abyBBVGA[0])
  VAR_2 |= 0x20;
 else if (VAR_0->bShortSlotTime)
  VAR_2 &= 0xDF;
 else
  VAR_2 |= 0x20;
 VAR_0->byBBVGACurrent = VAR_1;
 FUNC_1(VAR_0, 0x0A, VAR_2);
}
