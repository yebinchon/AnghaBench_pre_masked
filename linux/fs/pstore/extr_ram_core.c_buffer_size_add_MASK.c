
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct persistent_ram_zone {int flags; size_t buffer_size; int buffer_lock; TYPE_1__* buffer; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct persistent_ram_zone *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 unsigned long VAR_5 = 0;

 if (!(VAR_1->flags & VAR_0))
  FUNC_2(&VAR_1->buffer_lock, VAR_5);

 VAR_3 = FUNC_0(&VAR_1->buffer->size);
 if (VAR_3 == VAR_1->buffer_size)
  goto exit;

 VAR_4 = VAR_3 + VAR_2;
 if (VAR_4 > VAR_1->buffer_size)
  VAR_4 = VAR_1->buffer_size;
 FUNC_1(&VAR_1->buffer->size, VAR_4);

exit:
 if (!(VAR_1->flags & VAR_0))
  FUNC_3(&VAR_1->buffer_lock, VAR_5);
}
