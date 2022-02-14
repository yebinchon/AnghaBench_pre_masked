
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_bye_cmd {int dummy; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (struct fw_bye_cmd,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_bye_cmd*,int ,int) ;
 int FUNC_2 (struct adapter*,unsigned int,struct fw_bye_cmd*,int,int *) ;

int FUNC_3(struct adapter *VAR_2, unsigned int VAR_3)
{
 struct fw_bye_cmd VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(VAR_4, VAR_0, VAR_1);
 return FUNC_2(VAR_2, VAR_3, &VAR_4, sizeof(VAR_4), ((void*)0));
}
