
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct camif_dev {TYPE_1__* variant; } ;
struct TYPE_2__ {scalar_t__ ip_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct camif_dev*,int ) ;
 int FUNC_1 (struct camif_dev*,int ,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct camif_dev *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 VAR_7 |= VAR_2;
 FUNC_1(VAR_6, VAR_5, VAR_7);


 VAR_7 = FUNC_0(VAR_6, VAR_4);
 VAR_7 |= VAR_1;
 if (VAR_6->variant->ip_revision == VAR_3)
  VAR_7 |= VAR_0;
 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_2(10);

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 VAR_7 &= ~VAR_1;
 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_2(10);
}
