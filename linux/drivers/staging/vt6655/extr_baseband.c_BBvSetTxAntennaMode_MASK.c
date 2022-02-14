
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct vnt_private*,int,unsigned char*) ;
 int FUNC_1 (struct vnt_private*,int,unsigned char) ;

void
FUNC_2(struct vnt_private *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;

 FUNC_0(VAR_3, 0x09, &VAR_5);
 if (VAR_4 == VAR_2) {

  VAR_5 |= 0x02;
 } else if (VAR_4 == VAR_0) {

  VAR_5 &= 0xF9;
 } else if (VAR_4 == VAR_1) {
  VAR_5 &= 0xFD;
  VAR_5 |= 0x04;
 }
 FUNC_1(VAR_3, 0x09, VAR_5);
}
