
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hcp_query_ehea {scalar_t__ max_mc_mac; } ;
struct ehea_adapter {scalar_t__ max_mc_mac; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct hcp_query_ehea*) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ehea_adapter *VAR_4)
{
 struct hcp_query_ehea *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_5 = (void *)FUNC_2(VAR_2);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_4->handle, VAR_5);

 if (VAR_6 != VAR_3) {
  VAR_7 = -VAR_0;
  goto out_herr;
 }

 VAR_4->max_mc_mac = VAR_5->max_mc_mac - 1;
 VAR_7 = 0;

out_herr:
 FUNC_1((unsigned long)VAR_5);
out:
 return VAR_7;
}
