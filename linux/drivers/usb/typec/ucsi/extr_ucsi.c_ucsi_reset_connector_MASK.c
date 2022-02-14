
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_control {int dummy; } ;
struct ucsi_connector {int ucsi; } ;


 int FUNC_0 (struct ucsi_control,struct ucsi_connector*,int) ;
 int FUNC_1 (int ,struct ucsi_control*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ucsi_connector *VAR_0, bool VAR_1)
{
 struct ucsi_control VAR_2;

 FUNC_0(VAR_2, VAR_0, VAR_1);

 return FUNC_1(VAR_0->ucsi, &VAR_2, ((void*)0), 0);
}
