
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int aux_len; int flags; void* aux; void* inline_aux; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,void const*,int) ;
 int FUNC_1 (void*,void const*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline
void FUNC_3(struct fscache_cookie *VAR_1, const void *VAR_2)
{
 void *VAR_3;

 if (!VAR_2)
  return;
 if (VAR_1->aux_len <= sizeof(VAR_1->inline_aux))
  VAR_3 = VAR_1->inline_aux;
 else
  VAR_3 = VAR_1->aux;

 if (FUNC_0(VAR_3, VAR_2, VAR_1->aux_len) != 0) {
  FUNC_1(VAR_3, VAR_2, VAR_1->aux_len);
  FUNC_2(VAR_0, &VAR_1->flags);
 }
}
