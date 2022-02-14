
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {unsigned int buffer_target_count; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_stream*) ;

int FUNC_3(struct pvr2_stream *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 if (VAR_0->buffer_target_count == VAR_1) return 0;
 FUNC_0(&VAR_0->mutex);
 do {
  VAR_0->buffer_target_count = VAR_1;
  VAR_2 = FUNC_2(VAR_0);
 } while (0);
 FUNC_1(&VAR_0->mutex);
 return VAR_2;
}
