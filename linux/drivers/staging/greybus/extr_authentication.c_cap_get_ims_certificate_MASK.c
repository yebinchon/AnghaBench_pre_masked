
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; } ;
struct gb_connection {int dummy; } ;
struct gb_cap_get_ims_certificate_response {int certificate; int result_code; } ;
struct gb_cap_get_ims_certificate_request {void* certificate_id; void* certificate_class; } ;
struct gb_cap {int parent; struct gb_connection* connection; } ;
struct TYPE_4__ {scalar_t__ payload_size; struct gb_cap_get_ims_certificate_response* payload; } ;
struct TYPE_3__ {struct gb_cap_get_ims_certificate_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 struct gb_operation* FUNC_2 (struct gb_connection*,int ,int,size_t,int ,int ) ;
 size_t FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gb_cap *VAR_4, u32 VAR_5, u32 VAR_6,
       u8 *VAR_7, u32 *VAR_8, u8 *VAR_9)
{
 struct gb_connection *VAR_10 = VAR_4->connection;
 struct gb_cap_get_ims_certificate_request *VAR_11;
 struct gb_cap_get_ims_certificate_response *VAR_12;
 size_t VAR_13 = FUNC_3(VAR_10);
 struct gb_operation *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_10,
           VAR_1,
           sizeof(*VAR_11), VAR_13,
           VAR_2,
           VAR_3);
 if (!VAR_14)
  return -VAR_0;

 VAR_11 = VAR_14->request->payload;
 VAR_11->certificate_class = FUNC_0(VAR_5);
 VAR_11->certificate_id = FUNC_0(VAR_6);

 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_4->parent, "failed to get certificate (%d)\n", VAR_15);
  goto done;
 }

 VAR_12 = VAR_14->response->payload;
 *VAR_9 = VAR_12->result_code;
 *VAR_8 = VAR_14->response->payload_size - sizeof(*VAR_12);
 FUNC_6(VAR_7, VAR_12->certificate, *VAR_8);

done:
 FUNC_4(VAR_14);
 return VAR_15;
}
