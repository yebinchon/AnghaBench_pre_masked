
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_camera_stream_config {unsigned int width; unsigned int height; unsigned int format; int vc; int* dt; int max_size; } ;
struct gb_camera_debugfs_buffer {scalar_t__ length; scalar_t__ data; } ;
struct TYPE_2__ {struct gb_camera_debugfs_buffer* buffers; } ;
struct gb_camera {TYPE_1__ debugfs; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gb_camera*,unsigned int*,unsigned int*,struct gb_camera_stream_config*,int *) ;
 struct gb_camera_stream_config* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct gb_camera_stream_config*) ;
 int FUNC_3 (char*,int,unsigned int*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,unsigned int,unsigned int,...) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct gb_camera *VAR_5,
         char *VAR_6, size_t VAR_7)
{
 struct gb_camera_debugfs_buffer *VAR_8 =
  &VAR_5->debugfs.buffers[VAR_2];
 struct gb_camera_stream_config *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 char *VAR_13;
 int VAR_14;


 VAR_13 = FUNC_5(&VAR_6, ";");
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_13, 10, &VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_10 > VAR_3)
  return -VAR_0;

 VAR_13 = FUNC_5(&VAR_6, ";");
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_13, 10, &VAR_11);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_9 = FUNC_1(VAR_10, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
  struct gb_camera_stream_config *VAR_15 = &VAR_9[VAR_12];


  VAR_13 = FUNC_5(&VAR_6, ";");
  if (!VAR_13) {
   VAR_14 = -VAR_0;
   goto done;
  }
  VAR_14 = FUNC_3(VAR_13, 10, &VAR_15->width);
  if (VAR_14 < 0)
   goto done;


  VAR_13 = FUNC_5(&VAR_6, ";");
  if (!VAR_13)
   goto done;

  VAR_14 = FUNC_3(VAR_13, 10, &VAR_15->height);
  if (VAR_14 < 0)
   goto done;


  VAR_13 = FUNC_5(&VAR_6, ";");
  if (!VAR_13)
   goto done;

  VAR_14 = FUNC_3(VAR_13, 16, &VAR_15->format);
  if (VAR_14 < 0)
   goto done;
 }

 VAR_14 = FUNC_0(VAR_5, &VAR_10, &VAR_11, VAR_9,
       ((void*)0));
 if (VAR_14 < 0)
  goto done;

 VAR_8->length = FUNC_4(VAR_8->data, "%u;%u;", VAR_10, VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
  struct gb_camera_stream_config *VAR_16 = &VAR_9[VAR_12];

  VAR_8->length += FUNC_4(VAR_8->data + VAR_8->length,
       "%u;%u;%u;%u;%u;%u;%u;",
       VAR_16->width, VAR_16->height,
       VAR_16->format, VAR_16->vc,
       VAR_16->dt[0], VAR_16->dt[1],
       VAR_16->max_size);
 }

 VAR_14 = VAR_7;

done:
 FUNC_2(VAR_9);
 return VAR_14;
}
