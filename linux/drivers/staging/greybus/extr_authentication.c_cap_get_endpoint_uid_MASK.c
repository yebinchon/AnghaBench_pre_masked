
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_connection {int dummy; } ;
struct gb_cap_get_endpoint_uid_response {int uid; } ;
struct gb_cap {int parent; struct gb_connection* connection; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gb_connection*,int ,int *,int ,struct gb_cap_get_endpoint_uid_response*,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gb_cap *VAR_1, u8 *VAR_2)
{
 struct gb_connection *VAR_3 = VAR_1->connection;
 struct gb_cap_get_endpoint_uid_response VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, ((void*)0),
    0, &VAR_4, sizeof(VAR_4));
 if (VAR_5) {
  FUNC_0(VAR_1->parent, "failed to get endpoint uid (%d)\n", VAR_5);
  return VAR_5;
 }

 FUNC_2(VAR_2, VAR_4.uid, sizeof(VAR_4.uid));

 return 0;
}
