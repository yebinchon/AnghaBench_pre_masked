
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_mac {scalar_t__ media_type; scalar_t__ module_type; int support_autoneg; int advertising; int supported; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct hclge_mac*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hclge_mac *VAR_6)
{

 FUNC_0(VAR_6);




 if (VAR_6->media_type == VAR_1 &&
     VAR_6->module_type == VAR_5)
  VAR_6->module_type = VAR_3;
 else if (VAR_6->media_type == VAR_2)
  VAR_6->module_type = VAR_4;

 if (VAR_6->support_autoneg == 1) {
  FUNC_3(VAR_0, VAR_6->supported);
  FUNC_2(VAR_6->advertising, VAR_6->supported);
 } else {
  FUNC_1(VAR_0,
       VAR_6->supported);
  FUNC_4(VAR_6->advertising);
 }
}
