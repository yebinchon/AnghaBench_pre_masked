
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const vq_callback_t ;
typedef size_t u32 ;
typedef char const virtqueue ;
struct virtio_scsi {size_t num_queues; int * req_vqs; int event_vq; int ctrl_vq; } ;
struct virtio_device {int dummy; } ;
struct irq_affinity {int pre_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const**) ;
 char** FUNC_1 (size_t,int,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct virtio_device*,size_t,char const**,char const**,char const**,struct irq_affinity*) ;
 int FUNC_3 (struct virtio_device*,int ,int ) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (struct virtio_device*) ;
 char* VAR_9 ;

__attribute__((used)) static int FUNC_6(struct virtio_device *VAR_10,
    struct virtio_scsi *VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 vq_callback_t **VAR_15;
 const char **VAR_16;
 struct virtqueue **VAR_17;
 struct irq_affinity VAR_18 = { .pre_vectors = 2 };

 VAR_14 = VAR_11->num_queues + VAR_4;
 VAR_17 = FUNC_1(VAR_14, sizeof(struct virtqueue *), VAR_1);
 VAR_15 = FUNC_1(VAR_14, sizeof(vq_callback_t *),
      VAR_1);
 VAR_16 = FUNC_1(VAR_14, sizeof(char *), VAR_1);

 if (!VAR_15 || !VAR_17 || !VAR_16) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_15[0] = VAR_7;
 VAR_15[1] = VAR_8;
 VAR_16[0] = "control";
 VAR_16[1] = "event";
 for (VAR_13 = VAR_4; VAR_13 < VAR_14; VAR_13++) {
  VAR_15[VAR_13] = VAR_9;
  VAR_16[VAR_13] = "request";
 }


 VAR_12 = FUNC_2(VAR_10, VAR_14, VAR_17, VAR_15, VAR_16, &VAR_18);
 if (VAR_12)
  goto out;

 FUNC_4(&VAR_11->ctrl_vq, VAR_17[0]);
 FUNC_4(&VAR_11->event_vq, VAR_17[1]);
 for (VAR_13 = VAR_4; VAR_13 < VAR_14; VAR_13++)
  FUNC_4(&VAR_11->req_vqs[VAR_13 - VAR_4],
     VAR_17[VAR_13]);

 FUNC_3(VAR_10, VAR_5, VAR_2);
 FUNC_3(VAR_10, VAR_6, VAR_3);

 VAR_12 = 0;

out:
 FUNC_0(VAR_16);
 FUNC_0(VAR_15);
 FUNC_0(VAR_17);
 if (VAR_12)
  FUNC_5(VAR_10);
 return VAR_12;
}
