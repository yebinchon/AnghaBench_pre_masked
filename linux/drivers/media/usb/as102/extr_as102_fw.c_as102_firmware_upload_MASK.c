
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_5__ {int* request; } ;
struct TYPE_4__ {int data; int address; } ;
struct as10x_fw_pkt_t {TYPE_2__ u; TYPE_1__ raw; } ;
struct as10x_bus_adapter_t {TYPE_3__* ops; } ;
struct TYPE_6__ {int (* upload_fw_pkt ) (struct as10x_bus_adapter_t*,int *,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct as10x_fw_pkt_t*) ;
 struct as10x_fw_pkt_t* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ,int*,unsigned char*) ;
 int FUNC_3 (struct as10x_bus_adapter_t*,int *,int,int ) ;
 int FUNC_4 (struct as10x_bus_adapter_t*,int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct as10x_bus_adapter_t *VAR_2,
     unsigned char *VAR_3,
     const struct firmware *VAR_4) {

 struct as10x_fw_pkt_t *VAR_5;
 int VAR_6 = 0, VAR_7 = 0;
 unsigned char VAR_8 = 0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_4->size; ) {
  int VAR_9 = 0, VAR_10 = 0;


  VAR_9 = FUNC_2(
    (u8 *) (VAR_4->data + VAR_6),
    VAR_5->raw.address,
    VAR_5->raw.data,
    &VAR_10,
    &VAR_8);

  if (VAR_9 <= 0)
   goto error;


  VAR_6 += VAR_9;
  if (VAR_6 == VAR_4->size) {
   VAR_5->u.request[0] = 0x00;
   VAR_5->u.request[1] = 0x03;


   VAR_7 = VAR_2->ops->upload_fw_pkt(VAR_2,
            (uint8_t *)
            VAR_5, 2, 0);
   if (VAR_7 < 0)
    goto error;
  } else {
   if (!VAR_8) {

    VAR_5->u.request[0] = 0x00;
    VAR_5->u.request[1] = 0x01;

    VAR_10 += sizeof(VAR_5->u.request);
    VAR_10 += sizeof(VAR_5->raw.address);


    VAR_7 = VAR_2->ops->upload_fw_pkt(VAR_2,
             (uint8_t *)
             VAR_5,
             VAR_10,
             0);
    if (VAR_7 < 0)
     goto error;
   }
  }
 }
error:
 FUNC_0(VAR_5);
 return (VAR_7 == 0) ? VAR_6 : VAR_7;
}
