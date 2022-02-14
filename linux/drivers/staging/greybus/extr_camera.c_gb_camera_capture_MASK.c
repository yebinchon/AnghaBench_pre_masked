
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_camera_capture_request {unsigned int streams; int settings; int num_frames; scalar_t__ padding; int request_id; } ;
struct gb_camera {int mutex; int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct gb_camera_capture_request*,size_t,int *,int ) ;
 int FUNC_3 (struct gb_camera_capture_request*) ;
 struct gb_camera_capture_request* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,void const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct gb_camera *VAR_5, u32 VAR_6,
        unsigned int VAR_7, unsigned int VAR_8,
        size_t VAR_9, const void *VAR_10)
{
 struct gb_camera_capture_request *VAR_11;
 size_t VAR_12;
 int VAR_13;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 VAR_12 = sizeof(*VAR_11) + VAR_9;
 VAR_11 = FUNC_4(VAR_12, VAR_4);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->request_id = FUNC_1(VAR_6);
 VAR_11->streams = VAR_7;
 VAR_11->padding = 0;
 VAR_11->num_frames = FUNC_0(VAR_8);
 FUNC_5(VAR_11->settings, VAR_10, VAR_9);

 FUNC_6(&VAR_5->mutex);

 if (!VAR_5->connection) {
  VAR_13 = -VAR_0;
  goto done;
 }

 VAR_13 = FUNC_2(VAR_5->connection, VAR_3,
    VAR_11, VAR_12, ((void*)0), 0);
done:
 FUNC_7(&VAR_5->mutex);

 FUNC_3(VAR_11);

 return VAR_13;
}
