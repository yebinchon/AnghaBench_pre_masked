
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera_stream_config_response {int max_size; int * data_type; int virtual_channel; void* format; void* height; void* width; scalar_t__ padding; } ;
struct gb_camera_stream_config_request {int max_size; int * data_type; int virtual_channel; void* format; void* height; void* width; scalar_t__ padding; } ;
struct gb_camera_stream_config {int max_size; int * dt; int vc; void* format; void* height; void* width; } ;
struct gb_camera_csi_params {int dummy; } ;
struct gb_camera_configure_streams_response {unsigned int num_streams; unsigned int flags; struct gb_camera_stream_config_response* config; scalar_t__ padding; } ;
struct gb_camera_configure_streams_request {unsigned int num_streams; unsigned int flags; struct gb_camera_stream_config_response* config; scalar_t__ padding; } ;
struct gb_camera {scalar_t__ state; int mutex; int bundle; int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (struct gb_camera*,struct gb_camera_configure_streams_response*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,struct gb_camera_configure_streams_response*,size_t,struct gb_camera_configure_streams_response*,size_t*) ;
 int FUNC_3 (struct gb_camera*,struct gb_camera_configure_streams_response*,struct gb_camera_csi_params*) ;
 int FUNC_4 (struct gb_camera*) ;
 int FUNC_5 (int ,int ,struct gb_camera_configure_streams_response*,int,struct gb_camera_configure_streams_response*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct gb_camera_configure_streams_response*) ;
 struct gb_camera_configure_streams_response* FUNC_11 (size_t,int ) ;
 void* FUNC_12 (void*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct gb_camera_configure_streams_response*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct gb_camera *VAR_10,
           unsigned int *VAR_11,
           unsigned int *VAR_12,
           struct gb_camera_stream_config *VAR_13,
           struct gb_camera_csi_params *VAR_14)
{
 struct gb_camera_configure_streams_request *VAR_15;
 struct gb_camera_configure_streams_response *VAR_16;
 unsigned int VAR_17 = *VAR_11;
 unsigned int VAR_18;
 size_t VAR_19;
 size_t VAR_20;
 int VAR_21;

 if (VAR_17 > VAR_4)
  return -VAR_0;

 VAR_19 = sizeof(*VAR_15) + VAR_17 * sizeof(VAR_15->config[0]);
 VAR_20 = sizeof(*VAR_16) + VAR_17 * sizeof(VAR_16->config[0]);

 VAR_15 = FUNC_11(VAR_19, VAR_9);
 VAR_16 = FUNC_11(VAR_20, VAR_9);
 if (!VAR_15 || !VAR_16) {
  FUNC_10(VAR_15);
  FUNC_10(VAR_16);
  return -VAR_1;
 }

 VAR_15->num_streams = VAR_17;
 VAR_15->flags = *VAR_12;
 VAR_15->padding = 0;

 for (VAR_18 = 0; VAR_18 < VAR_17; ++VAR_18) {
  struct gb_camera_stream_config_request *VAR_22 = &VAR_15->config[VAR_18];

  VAR_22->width = FUNC_0(VAR_13[VAR_18].width);
  VAR_22->height = FUNC_0(VAR_13[VAR_18].height);
  VAR_22->format = FUNC_0(VAR_13[VAR_18].format);
  VAR_22->padding = 0;
 }

 FUNC_15(&VAR_10->mutex);

 VAR_21 = FUNC_7(VAR_10->bundle);
 if (VAR_21)
  goto done_skip_pm_put;

 if (!VAR_10->connection) {
  VAR_21 = -VAR_0;
  goto done;
 }

 VAR_21 = FUNC_2(VAR_10->connection,
          VAR_7,
          VAR_8,
          VAR_15, VAR_19,
          VAR_16, &VAR_20);
 if (VAR_21 < 0)
  goto done;

 VAR_21 = FUNC_1(VAR_10, VAR_16,
           VAR_17);
 if (VAR_21 < 0)
  goto done;

 *VAR_12 = VAR_16->flags;
 *VAR_11 = VAR_16->num_streams;

 for (VAR_18 = 0; VAR_18 < VAR_16->num_streams; ++VAR_18) {
  struct gb_camera_stream_config_response *VAR_23 = &VAR_16->config[VAR_18];

  VAR_13[VAR_18].width = FUNC_12(VAR_23->width);
  VAR_13[VAR_18].height = FUNC_12(VAR_23->height);
  VAR_13[VAR_18].format = FUNC_12(VAR_23->format);
  VAR_13[VAR_18].vc = VAR_23->virtual_channel;
  VAR_13[VAR_18].dt[0] = VAR_23->data_type[0];
  VAR_13[VAR_18].dt[1] = VAR_23->data_type[1];
  VAR_13[VAR_18].max_size = FUNC_13(VAR_23->max_size);
 }

 if ((VAR_16->flags & VAR_2) ||
     (VAR_15->flags & VAR_3))
  goto done;

 if (VAR_10->state == VAR_5) {
  FUNC_4(VAR_10);
  VAR_10->state = VAR_6;
  FUNC_9(VAR_10->bundle);
 }

 if (VAR_16->num_streams == 0)
  goto done;





 FUNC_6(VAR_10->bundle);


 VAR_21 = FUNC_3(VAR_10, VAR_16, VAR_14);
 if (VAR_21 < 0) {
  FUNC_14(VAR_15, 0, sizeof(*VAR_15));
  FUNC_5(VAR_10->connection,
      VAR_7,
      VAR_15, sizeof(*VAR_15),
      VAR_16, sizeof(*VAR_16));
  *VAR_12 = 0;
  *VAR_11 = 0;
  FUNC_9(VAR_10->bundle);
  goto done;
 }

 VAR_10->state = VAR_5;

done:
 FUNC_8(VAR_10->bundle);

done_skip_pm_put:
 FUNC_16(&VAR_10->mutex);
 FUNC_10(VAR_15);
 FUNC_10(VAR_16);
 return VAR_21;
}
