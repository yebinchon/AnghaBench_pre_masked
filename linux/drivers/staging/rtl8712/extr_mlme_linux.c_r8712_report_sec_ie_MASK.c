
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
struct _adapter {int pnetdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (scalar_t__*,char*,...) ;
 int FUNC_4 (int ,int ,union iwreq_data*,scalar_t__*) ;

void FUNC_5(struct _adapter *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 uint VAR_7;
 u8 *VAR_8, *VAR_9, VAR_10;
 union iwreq_data VAR_11;

 VAR_8 = ((void*)0);
 if (VAR_5 == VAR_3) {
  VAR_8 = FUNC_1(VAR_2, VAR_0);
  if (!VAR_8)
   return;
  VAR_9 = VAR_8;
  VAR_9 += FUNC_3(VAR_9, "ASSOCINFO(ReqIEs=");
  VAR_7 = VAR_6[1] + 2;
  VAR_7 = (VAR_7 < VAR_2) ? VAR_7 : VAR_2;
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
   VAR_9 += FUNC_3(VAR_9, "%02x", VAR_6[VAR_10]);
  VAR_9 += FUNC_3(VAR_9, ")");
  FUNC_2(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.data.length = VAR_9 - VAR_8;
  VAR_11.data.length = (VAR_11.data.length < VAR_2) ?
       VAR_11.data.length : VAR_2;
  FUNC_4(VAR_4->pnetdev, VAR_1, &VAR_11, VAR_8);
  FUNC_0(VAR_8);
 }
}
