
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct ks_wlan_private {int net_dev; scalar_t__ rxp; } ;
struct association_response {int resp_ies_size; } ;
struct association_request {int req_ies_size; } ;
typedef int associnfo_leader1 ;
typedef int associnfo_leader0 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int ,int ,union iwreq_data*,char*) ;

__attribute__((used)) static
void FUNC_5(struct ks_wlan_private *VAR_2)
{
 struct association_request *VAR_3;
 struct association_response *VAR_4;
 unsigned char *VAR_5;
 union iwreq_data VAR_6;
 char VAR_7[VAR_1];
 char *VAR_8 = &VAR_7[0];
 int VAR_9;

 static const char VAR_10[] = "ASSOCINFO(ReqIEs=";
 static const char VAR_11[] = " RespIEs=";

 VAR_3 = (struct association_request *)(VAR_2->rxp);
 VAR_4 = (struct association_response *)(VAR_3 + 1);
 VAR_5 = (unsigned char *)(VAR_4 + 1);

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_8, VAR_10, sizeof(VAR_10) - 1);
 VAR_6.data.length += sizeof(VAR_10) - 1;
 VAR_8 += sizeof(VAR_10) - 1;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3->req_ies_size); VAR_9++)
  VAR_8 += FUNC_3(VAR_8, "%02x", *(VAR_5 + VAR_9));
 VAR_6.data.length += (FUNC_0(VAR_3->req_ies_size)) * 2;

 FUNC_1(VAR_8, VAR_11, sizeof(VAR_11) - 1);
 VAR_6.data.length += sizeof(VAR_11) - 1;
 VAR_8 += sizeof(VAR_11) - 1;

 VAR_5 += FUNC_0(VAR_3->req_ies_size);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->resp_ies_size); VAR_9++)
  VAR_8 += FUNC_3(VAR_8, "%02x", *(VAR_5 + VAR_9));
 VAR_6.data.length += (FUNC_0(VAR_4->resp_ies_size)) * 2;

 VAR_8 += FUNC_3(VAR_8, ")");
 VAR_6.data.length += 1;

 FUNC_4(VAR_2->net_dev, VAR_0, &VAR_6, VAR_7);
}
