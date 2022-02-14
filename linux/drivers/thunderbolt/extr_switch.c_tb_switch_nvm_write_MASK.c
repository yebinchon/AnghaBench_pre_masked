
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_switch {TYPE_2__* tb; TYPE_1__* nvm; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {unsigned int buf_data_size; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, unsigned int VAR_3, void *VAR_4,
          size_t VAR_5)
{
 struct tb_switch *VAR_6 = VAR_2;
 int VAR_7 = 0;

 if (!FUNC_1(&VAR_6->tb->lock))
  return FUNC_3();







 if (!VAR_6->nvm->buf) {
  VAR_6->nvm->buf = FUNC_4(VAR_1);
  if (!VAR_6->nvm->buf) {
   VAR_7 = -VAR_0;
   goto unlock;
  }
 }

 VAR_6->nvm->buf_data_size = VAR_3 + VAR_5;
 FUNC_0(VAR_6->nvm->buf + VAR_3, VAR_4, VAR_5);

unlock:
 FUNC_2(&VAR_6->tb->lock);

 return VAR_7;
}
