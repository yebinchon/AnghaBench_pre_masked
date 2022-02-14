
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int fw_feat_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct wcn36xx *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_2->fw_feat_caps, VAR_3))
   FUNC_1(VAR_1, "FW Cap %s\n", FUNC_2(VAR_3));
 }
}
