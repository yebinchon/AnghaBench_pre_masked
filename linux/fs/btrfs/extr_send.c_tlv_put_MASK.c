
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct send_ctx {int send_max_size; int send_size; int send_buf; } ;
struct btrfs_tlv_header {void* tlv_len; void* tlv_type; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_tlv_header*,void const*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct send_ctx *VAR_1, u16 VAR_2, const void *VAR_3, int VAR_4)
{
 struct btrfs_tlv_header *VAR_5;
 int VAR_6 = sizeof(*VAR_5) + VAR_4;
 int VAR_7 = VAR_1->send_max_size - VAR_1->send_size;

 if (FUNC_2(VAR_7 < VAR_6))
  return -VAR_0;

 VAR_5 = (struct btrfs_tlv_header *) (VAR_1->send_buf + VAR_1->send_size);
 VAR_5->tlv_type = FUNC_0(VAR_2);
 VAR_5->tlv_len = FUNC_0(VAR_4);
 FUNC_1(VAR_5 + 1, VAR_3, VAR_4);
 VAR_1->send_size += VAR_6;

 return 0;
}
