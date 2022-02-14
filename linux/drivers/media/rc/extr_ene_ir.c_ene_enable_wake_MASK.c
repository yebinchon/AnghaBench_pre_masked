
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct ene_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ene_device *VAR_2, bool VAR_3)
{
 FUNC_0("wake on IR %s", VAR_3 ? "enabled" : "disabled");
 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);
}
