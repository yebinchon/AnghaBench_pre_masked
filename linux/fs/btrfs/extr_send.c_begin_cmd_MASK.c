
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int send_size; scalar_t__ send_buf; } ;
struct btrfs_cmd_header {int cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct send_ctx *VAR_1, int VAR_2)
{
 struct btrfs_cmd_header *VAR_3;

 if (FUNC_1(!VAR_1->send_buf))
  return -VAR_0;

 FUNC_0(VAR_1->send_size);

 VAR_1->send_size += sizeof(*VAR_3);
 VAR_3 = (struct btrfs_cmd_header *)VAR_1->send_buf;
 VAR_3->cmd = FUNC_2(VAR_2);

 return 0;
}
