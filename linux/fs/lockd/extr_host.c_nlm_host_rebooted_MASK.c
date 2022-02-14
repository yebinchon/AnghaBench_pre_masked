
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_handle {int dummy; } ;
struct nlm_reboot {int dummy; } ;
struct nlm_host {int dummy; } ;
struct net {int dummy; } ;


 struct nlm_host* FUNC_0 (int ,struct nsm_handle*,struct nlm_reboot const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nlm_host*) ;
 int FUNC_2 (struct nlm_host*) ;
 int FUNC_3 (struct nlm_host*) ;
 int FUNC_4 (struct nlm_host*) ;
 struct nsm_handle* FUNC_5 (struct net const*,struct nlm_reboot const*) ;
 int FUNC_6 (struct nsm_handle*) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(const struct net *VAR_2, const struct nlm_reboot *VAR_3)
{
 struct nsm_handle *VAR_4;
 struct nlm_host *VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_7(VAR_4 == ((void*)0)))
  return;






 while ((VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_3)) != ((void*)0)) {
  FUNC_3(VAR_5);
  FUNC_4(VAR_5);
 }
 while ((VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
 }

 FUNC_6(VAR_4);
}
