
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_camera_debugfs_buffer {int data; int length; } ;
struct TYPE_2__ {struct gb_camera_debugfs_buffer* buffers; } ;
struct gb_camera {TYPE_1__ debugfs; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct gb_camera*,unsigned int*) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct gb_camera *VAR_1,
           char *VAR_2, size_t VAR_3)
{
 struct gb_camera_debugfs_buffer *VAR_4 =
  &VAR_1->debugfs.buffers[VAR_0];
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->length = FUNC_1(VAR_4->data, "%u", VAR_5);

 return VAR_3;
}
