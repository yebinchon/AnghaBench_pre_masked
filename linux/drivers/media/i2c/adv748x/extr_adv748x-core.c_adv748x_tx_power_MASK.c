
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv748x_csi2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct adv748x_csi2*) ;
 int FUNC_2 (struct adv748x_csi2*) ;
 int FUNC_3 (struct adv748x_csi2*) ;
 int FUNC_4 (struct adv748x_csi2*,int ) ;

int FUNC_5(struct adv748x_csi2 *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (!FUNC_3(VAR_2))
  return 0;

 VAR_4 = FUNC_4(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;






 FUNC_0((VAR_3 && VAR_4 & VAR_1),
   "Enabling with unknown bit set");

 return VAR_3 ? FUNC_2(VAR_2) : FUNC_1(VAR_2);
}
