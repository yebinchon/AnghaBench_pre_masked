
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vnt_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vnt_private*,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

bool FUNC_1(struct vnt_private *VAR_3,
           u16 VAR_4,
           u16 VAR_5)
{
 bool VAR_6;

 VAR_6 = 1;





 if ((VAR_4 <= VAR_0) && (VAR_5 > VAR_0)) {

  VAR_6 &= FUNC_0(VAR_3, VAR_2[2]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[3]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[5]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[7]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[10]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[12]);
  VAR_6 &= FUNC_0(VAR_3, VAR_2[15]);
 } else if ((VAR_4 > VAR_0) && (VAR_5 <= VAR_0)) {

  VAR_6 &= FUNC_0(VAR_3, VAR_1[2]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[3]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[5]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[7]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[10]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[12]);
  VAR_6 &= FUNC_0(VAR_3, VAR_1[15]);
 }

 return VAR_6;
}
