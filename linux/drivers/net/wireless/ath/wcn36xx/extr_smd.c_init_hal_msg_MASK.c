
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_msg_header {int msg_type; size_t len; int msg_version; } ;
typedef enum wcn36xx_hal_host_msg_type { ____Placeholder_wcn36xx_hal_host_msg_type } wcn36xx_hal_host_msg_type ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_msg_header*,int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct wcn36xx_hal_msg_header *VAR_1,
    enum wcn36xx_hal_host_msg_type VAR_2,
    size_t VAR_3)
{
 FUNC_0(VAR_1, 0, VAR_3 + sizeof(*VAR_1));
 VAR_1->msg_type = VAR_2;
 VAR_1->msg_version = VAR_0;
 VAR_1->len = VAR_3 + sizeof(*VAR_1);
}
