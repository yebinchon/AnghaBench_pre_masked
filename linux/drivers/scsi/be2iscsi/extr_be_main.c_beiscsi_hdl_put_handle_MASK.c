
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_async_handle {int link; scalar_t__ in_use; scalar_t__ buffer_len; scalar_t__ is_final; } ;
struct hd_async_context {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct hd_async_context *VAR_0,
    struct hd_async_handle *VAR_1)
{
 VAR_1->is_final = 0;
 VAR_1->buffer_len = 0;
 VAR_1->in_use = 0;
 FUNC_0(&VAR_1->link);
}
