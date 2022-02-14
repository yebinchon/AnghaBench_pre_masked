
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct send_ctx {scalar_t__ send_size; int * cmd_send_size; int total_send_size; int send_off; scalar_t__ send_buf; int send_filp; } ;
struct btrfs_cmd_header {int cmd; void* crc; void* len; } ;


 scalar_t__ FUNC_0 (int ,unsigned char*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_0)
{
 int VAR_1;
 struct btrfs_cmd_header *VAR_2;
 u32 VAR_3;

 VAR_2 = (struct btrfs_cmd_header *)VAR_0->send_buf;
 VAR_2->len = FUNC_1(VAR_0->send_size - sizeof(*VAR_2));
 VAR_2->crc = 0;

 VAR_3 = FUNC_0(0, (unsigned char *)VAR_0->send_buf, VAR_0->send_size);
 VAR_2->crc = FUNC_1(VAR_3);

 VAR_1 = FUNC_3(VAR_0->send_filp, VAR_0->send_buf, VAR_0->send_size,
     &VAR_0->send_off);

 VAR_0->total_send_size += VAR_0->send_size;
 VAR_0->cmd_send_size[FUNC_2(VAR_2->cmd)] += VAR_0->send_size;
 VAR_0->send_size = 0;

 return VAR_1;
}
