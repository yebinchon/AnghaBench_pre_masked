
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct o2net_msg {void* key; scalar_t__ status; void* sys_status; void* msg_type; void* data_len; void* magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct o2net_msg*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct o2net_msg *VAR_2, u16 VAR_3, u16 VAR_4, u32 VAR_5)
{
 FUNC_2(VAR_2, 0, sizeof(struct o2net_msg));
 VAR_2->magic = FUNC_0(VAR_1);
 VAR_2->data_len = FUNC_0(VAR_3);
 VAR_2->msg_type = FUNC_0(VAR_4);
 VAR_2->sys_status = FUNC_1(VAR_0);
 VAR_2->status = 0;
 VAR_2->key = FUNC_1(VAR_5);
}
