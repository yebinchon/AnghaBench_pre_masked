
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_camera_flush_response {int request_id; } ;
struct gb_camera {int mutex; int connection; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ,struct gb_camera_flush_response*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gb_camera *VAR_2, u32 *VAR_3)
{
 struct gb_camera_flush_response VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->mutex);

 if (!VAR_2->connection) {
  VAR_5 = -VAR_0;
  goto done;
 }

 VAR_5 = FUNC_0(VAR_2->connection, VAR_1, ((void*)0), 0,
    &VAR_4, sizeof(VAR_4));

 if (VAR_5 < 0)
  goto done;

 if (VAR_3)
  *VAR_3 = FUNC_1(VAR_4.request_id);

done:
 FUNC_3(&VAR_2->mutex);

 return VAR_5;
}
