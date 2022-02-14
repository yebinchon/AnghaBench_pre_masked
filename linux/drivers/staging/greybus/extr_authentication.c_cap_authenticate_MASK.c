
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; } ;
struct gb_connection {int dummy; } ;
struct gb_cap_authenticate_response {int * signature; int * response; int result_code; } ;
struct gb_cap_authenticate_request {int * challenge; int * uid; int auth_type; } ;
struct gb_cap {int parent; struct gb_connection* connection; } ;
struct TYPE_4__ {int payload_size; struct gb_cap_authenticate_response* payload; } ;
struct TYPE_3__ {struct gb_cap_authenticate_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 struct gb_operation* FUNC_2 (struct gb_connection*,int ,int,size_t,int ,int ) ;
 size_t FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(struct gb_cap *VAR_4, u32 VAR_5, u8 *VAR_6,
       u8 *VAR_7, u8 *VAR_8, u8 *VAR_9,
       u32 *VAR_10, u8 *VAR_11)
{
 struct gb_connection *VAR_12 = VAR_4->connection;
 struct gb_cap_authenticate_request *VAR_13;
 struct gb_cap_authenticate_response *VAR_14;
 size_t VAR_15 = FUNC_3(VAR_12);
 struct gb_operation *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_2(VAR_12, VAR_1,
           sizeof(*VAR_13), VAR_15,
           VAR_2,
           VAR_3);
 if (!VAR_16)
  return -VAR_0;

 VAR_13 = VAR_16->request->payload;
 VAR_13->auth_type = FUNC_0(VAR_5);
 FUNC_6(VAR_13->uid, VAR_6, sizeof(VAR_13->uid));
 FUNC_6(VAR_13->challenge, VAR_7, sizeof(VAR_13->challenge));

 VAR_17 = FUNC_5(VAR_16);
 if (VAR_17) {
  FUNC_1(VAR_4->parent, "failed to authenticate (%d)\n", VAR_17);
  goto done;
 }

 VAR_14 = VAR_16->response->payload;
 *VAR_8 = VAR_14->result_code;
 *VAR_10 = VAR_16->response->payload_size - sizeof(*VAR_14);
 FUNC_6(VAR_9, VAR_14->response, sizeof(VAR_14->response));
 FUNC_6(VAR_11, VAR_14->signature, *VAR_10);

done:
 FUNC_4(VAR_16);
 return VAR_17;
}
