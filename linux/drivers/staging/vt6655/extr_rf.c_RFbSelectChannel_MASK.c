
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_private {int dummy; } ;






 int FUNC_0 (struct vnt_private*,int ) ;
 int FUNC_1 (struct vnt_private*,int ) ;

bool FUNC_2(struct vnt_private *VAR_0, unsigned char VAR_1,
        u16 VAR_2)
{
 bool VAR_3 = 1;

 switch (VAR_1) {
 case 131:
 case 129:
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  break;

 case 130:
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  break;

 case 128:
  VAR_3 = 1;
  break;
 default:
  VAR_3 = 0;
  break;
 }
 return VAR_3;
}
