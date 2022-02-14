
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {unsigned char* abyBBVGA; scalar_t__ bShortSlotTime; } ;


 int FUNC_0 (struct vnt_private*,int,unsigned char*) ;
 int FUNC_1 (struct vnt_private*,int,unsigned char) ;

void
FUNC_2(struct vnt_private *VAR_0)
{
 unsigned char VAR_1 = 0;
 unsigned char VAR_2 = 0;

 FUNC_0(VAR_0, 0x0A, &VAR_1);

 if (VAR_0->bShortSlotTime)
  VAR_1 &= 0xDF;
 else
  VAR_1 |= 0x20;


 FUNC_0(VAR_0, 0xE7, &VAR_2);
 if (VAR_2 == VAR_0->abyBBVGA[0])
  VAR_1 |= 0x20;

 FUNC_1(VAR_0, 0x0A, VAR_1);
}
