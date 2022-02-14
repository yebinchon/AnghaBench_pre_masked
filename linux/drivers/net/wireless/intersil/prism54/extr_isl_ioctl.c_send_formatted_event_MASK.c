
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pointer; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct obj_mlme {int dummy; } ;
struct TYPE_6__ {int ndev; } ;
typedef TYPE_2__ islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,char const*,struct obj_mlme const*,scalar_t__*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,union iwreq_data*,char*) ;

__attribute__((used)) static void
FUNC_4(islpci_private *VAR_3, const char *VAR_4,
       const struct obj_mlme *VAR_5, int VAR_6)
{
 union iwreq_data VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_8)
  return;
 VAR_7.data.pointer = VAR_8;
 VAR_7.data.length = 0;
 FUNC_0(VAR_3, VAR_8, VAR_4, VAR_5, &VAR_7.data.length,
       VAR_6);
 FUNC_3(VAR_3->ndev, VAR_1, &VAR_7, VAR_8);
 FUNC_1(VAR_8);
}
