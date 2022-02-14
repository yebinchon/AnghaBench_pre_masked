
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct st_nci_pipe_info {scalar_t__ dst_gate_id; scalar_t__ src_host_id; int pipe_state; } ;
struct sk_buff {int len; size_t* data; } ;
struct nci_dev {TYPE_4__* hci_dev; } ;
typedef int pipe_list ;
typedef int pipe_info ;
struct TYPE_11__ {size_t gate; } ;
struct TYPE_8__ {TYPE_1__* gates; } ;
struct TYPE_10__ {size_t* gate2pipe; TYPE_3__* pipes; TYPE_2__ init_data; } ;
struct TYPE_9__ {size_t gate; scalar_t__ host; } ;
struct TYPE_7__ {size_t pipe; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nci_dev*,int ,int ,int ) ;
 int FUNC_4 (struct nci_dev*,int ,int ,size_t*,int,struct sk_buff**) ;
 int FUNC_5 (char*,scalar_t__) ;
 TYPE_5__* VAR_11 ;

int FUNC_6(struct nci_dev *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 struct sk_buff *VAR_16, *VAR_17;
 struct st_nci_pipe_info *VAR_18;
 u8 VAR_19[] = { VAR_7,
   VAR_9};
 u8 VAR_20[] = { VAR_6,
   VAR_9, 0};
 VAR_15 = FUNC_3(VAR_12, VAR_8,
    VAR_3,
    VAR_4);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_4(VAR_12, VAR_3,
   VAR_5, VAR_19, sizeof(VAR_19),
   &VAR_16);
 if (VAR_15 < 0)
  return VAR_15;


 for (VAR_13 = 0; VAR_13 < VAR_16->len; VAR_13++) {
  VAR_20[2] = VAR_16->data[VAR_13];
  VAR_15 = FUNC_4(VAR_12, VAR_3,
     VAR_5, VAR_20,
     sizeof(VAR_20), &VAR_17);

  if (VAR_15)
   continue;
  VAR_18 = (struct st_nci_pipe_info *)VAR_17->data;
  if (VAR_18->dst_gate_id == VAR_2 &&
      VAR_18->src_host_id == VAR_10) {
   FUNC_5("Unexpected apdu_reader pipe on host %x\n",
          VAR_18->src_host_id);
   FUNC_2(VAR_17);
   continue;
  }

  for (VAR_14 = 3; (VAR_14 < FUNC_0(VAR_11)) &&
       (VAR_11[VAR_14].gate != VAR_18->dst_gate_id); VAR_14++)
   ;

  if (VAR_14 < FUNC_0(VAR_11) &&
      VAR_11[VAR_14].gate == VAR_18->dst_gate_id &&
      FUNC_1(VAR_18->pipe_state)) {
   VAR_12->hci_dev->init_data.gates[VAR_14].pipe = VAR_20[2];

   VAR_12->hci_dev->gate2pipe[VAR_11[VAR_14].gate] =
      VAR_20[2];
   VAR_12->hci_dev->pipes[VAR_20[2]].gate =
      VAR_11[VAR_14].gate;
   VAR_12->hci_dev->pipes[VAR_20[2]].host =
      VAR_18->src_host_id;
  }
  FUNC_2(VAR_17);
 }





 VAR_15 = FUNC_3(VAR_12, VAR_8,
     VAR_0,
     VAR_1);

 FUNC_2(VAR_16);
 return VAR_15;
}
