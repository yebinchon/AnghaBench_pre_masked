
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_pstream_timeout_event {size_t traffic_class; } ;
struct wmi {int fat_pipe_exist; int parent_dev; int lock; scalar_t__* stream_exist_for_ac; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct wmi *VAR_2, u8 *VAR_3,
            int VAR_4)
{
 struct wmi_pstream_timeout_event *VAR_5;

 if (VAR_4 < sizeof(struct wmi_pstream_timeout_event))
  return -VAR_0;

 VAR_5 = (struct wmi_pstream_timeout_event *) VAR_3;
 if (VAR_5->traffic_class >= VAR_1) {
  FUNC_0("invalid traffic class: %d\n", VAR_5->traffic_class);
  return -VAR_0;
 }







 FUNC_2(&VAR_2->lock);
 VAR_2->stream_exist_for_ac[VAR_5->traffic_class] = 0;
 VAR_2->fat_pipe_exist &= ~(1 << VAR_5->traffic_class);
 FUNC_3(&VAR_2->lock);


 FUNC_1(VAR_2->parent_dev, VAR_5->traffic_class, 0);

 return 0;
}
