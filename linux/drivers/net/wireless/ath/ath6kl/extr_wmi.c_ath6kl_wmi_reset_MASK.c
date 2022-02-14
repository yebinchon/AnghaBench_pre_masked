
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {int lock; int stream_exist_for_ac; scalar_t__ fat_pipe_exist; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wmi *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 VAR_0->fat_pipe_exist = 0;
 FUNC_0(VAR_0->stream_exist_for_ac, 0, sizeof(VAR_0->stream_exist_for_ac));

 FUNC_2(&VAR_0->lock);
}
