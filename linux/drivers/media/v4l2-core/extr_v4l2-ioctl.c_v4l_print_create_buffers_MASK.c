
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_create_buffers {int format; int memory; int count; int index; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_create_buffers *VAR_3 = VAR_1;

 FUNC_0("index=%d, count=%d, memory=%s, ",
   VAR_3->index, VAR_3->count,
   FUNC_1(VAR_3->memory, VAR_0));
 FUNC_2(&VAR_3->format, VAR_2);
}
