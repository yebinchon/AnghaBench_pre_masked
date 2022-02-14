
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smd_channel_info_word {int dummy; } ;
struct smd_channel_info {int dummy; } ;
struct qcom_smd_edge {int dev; int remote_pid; } ;
struct qcom_smd_channel {size_t fifo_size; struct qcom_smd_channel* name; void* rx_fifo; void* tx_fifo; void* info; void* info_word; int state_change_event; int fblockread_event; int recv_lock; int tx_lock; struct qcom_smd_edge* edge; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qcom_smd_channel* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,char*,char*,size_t,size_t) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qcom_smd_channel*) ;
 struct qcom_smd_channel* FUNC_7 (char*,int ) ;
 struct qcom_smd_channel* FUNC_8 (int,int ) ;
 int FUNC_9 (struct qcom_smd_channel*) ;
 void* FUNC_10 (int ,unsigned int,size_t*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct qcom_smd_channel *FUNC_12(struct qcom_smd_edge *VAR_3,
       unsigned VAR_4,
       unsigned VAR_5,
       char *VAR_6)
{
 struct qcom_smd_channel *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 void *VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->edge = VAR_3;
 VAR_7->name = FUNC_7(VAR_6, VAR_2);
 if (!VAR_7->name) {
  VAR_12 = -VAR_1;
  goto free_channel;
 }

 FUNC_11(&VAR_7->tx_lock);
 FUNC_11(&VAR_7->recv_lock);
 FUNC_5(&VAR_7->fblockread_event);
 FUNC_5(&VAR_7->state_change_event);

 VAR_11 = FUNC_10(VAR_3->remote_pid, VAR_4, &VAR_9);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto free_name_and_channel;
 }





 if (VAR_9 == 2 * sizeof(struct smd_channel_info_word)) {
  VAR_7->info_word = VAR_11;
 } else if (VAR_9 == 2 * sizeof(struct smd_channel_info)) {
  VAR_7->info = VAR_11;
 } else {
  FUNC_4(&VAR_3->dev,
   "channel info of size %zu not supported\n", VAR_9);
  VAR_12 = -VAR_0;
  goto free_name_and_channel;
 }

 VAR_10 = FUNC_10(VAR_3->remote_pid, VAR_5, &VAR_8);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto free_name_and_channel;
 }


 VAR_8 /= 2;

 FUNC_3(&VAR_3->dev, "new channel '%s' info-size: %zu fifo-size: %zu\n",
     VAR_6, VAR_9, VAR_8);

 VAR_7->tx_fifo = VAR_10;
 VAR_7->rx_fifo = VAR_10 + VAR_8;
 VAR_7->fifo_size = VAR_8;

 FUNC_9(VAR_7);

 return VAR_7;

free_name_and_channel:
 FUNC_6(VAR_7->name);
free_channel:
 FUNC_6(VAR_7);

 return FUNC_0(VAR_12);
}
