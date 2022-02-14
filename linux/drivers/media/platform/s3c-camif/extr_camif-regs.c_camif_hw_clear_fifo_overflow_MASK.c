
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_vp {scalar_t__ id; struct camif_dev* camif; } ;
struct camif_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct camif_dev*,int ) ;
 int FUNC_1 (struct camif_dev*,int ,int) ;

void FUNC_2(struct camif_vp *VAR_6)
{
 struct camif_dev *VAR_7 = VAR_6->camif;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (VAR_6->id == 0)
  VAR_8 |= (VAR_2 | VAR_0 |
   VAR_1);
 else
  VAR_8 |= ( VAR_3 |
   VAR_4);
 FUNC_1(VAR_7, VAR_5, VAR_8);
}
