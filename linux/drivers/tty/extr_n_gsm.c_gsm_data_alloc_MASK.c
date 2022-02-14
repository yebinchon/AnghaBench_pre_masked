
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gsm_mux {int dummy; } ;
struct gsm_msg {int len; int list; void* ctrl; void* addr; scalar_t__ buffer; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct gsm_msg* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct gsm_msg *FUNC_2(struct gsm_mux *VAR_2, u8 VAR_3, int VAR_4,
        u8 VAR_5)
{
 struct gsm_msg *VAR_6 = FUNC_1(sizeof(struct gsm_msg) + VAR_4 + VAR_1,
        VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->data = VAR_6->buffer + VAR_1 - 1;
 VAR_6->len = VAR_4;
 VAR_6->addr = VAR_3;
 VAR_6->ctrl = VAR_5;
 FUNC_0(&VAR_6->list);
 return VAR_6;
}
