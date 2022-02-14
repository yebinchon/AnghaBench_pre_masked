
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,char*) ;
 int FUNC_1 (struct iwl_trans*,int ,int ,int ,int ) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_5, VAR_0,
      VAR_1);


 VAR_6 = FUNC_1(VAR_5, VAR_0,
      VAR_1,
      VAR_1,
      VAR_4);

 if (VAR_6 >= 0)
  FUNC_2(VAR_5, VAR_2, VAR_3);

 FUNC_0(VAR_5, "hardware%s ready\n", VAR_6 < 0 ? " not" : "");
 return VAR_6;
}
