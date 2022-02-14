
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nfp_bpf_neutral_map {int ptr; } ;
struct nfp_app_bpf {int maps_neutral; } ;
struct TYPE_2__ {scalar_t__ ver; } ;
struct cmsg_bpf_event {int * data; int cpu_id; TYPE_1__ hdr; int map_ptr; int data_size; int pkt_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,int,int *,int,int ) ;
 int FUNC_3 (struct nfp_app_bpf*,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct nfp_bpf_neutral_map* FUNC_6 (int *,int*,int ) ;
 size_t FUNC_7 (int,int) ;

int FUNC_8(struct nfp_app_bpf *VAR_5, const void *VAR_6,
    unsigned int VAR_7)
{
 struct cmsg_bpf_event *VAR_8 = (void *)VAR_6;
 struct nfp_bpf_neutral_map *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u64 VAR_13;

 if (VAR_7 < sizeof(struct cmsg_bpf_event))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8->pkt_size);
 VAR_11 = FUNC_0(VAR_8->data_size);
 VAR_13 = FUNC_1(VAR_8->map_ptr);
 VAR_12 = VAR_13;

 if (VAR_7 < sizeof(struct cmsg_bpf_event) + VAR_10 + VAR_11)
  return -VAR_0;
 if (VAR_8->hdr.ver != VAR_1)
  return -VAR_0;

 FUNC_4();
 VAR_9 = FUNC_6(&VAR_5->maps_neutral, &VAR_12,
     VAR_3);
 if (!VAR_9 || VAR_13 > VAR_2) {
  FUNC_5();
  FUNC_3(VAR_5, "perf event: map id %lld (0x%llx) not recognized, dropping event\n",
     VAR_13, VAR_13);
  return -VAR_0;
 }

 FUNC_2(VAR_9->ptr, FUNC_0(VAR_8->cpu_id),
    &VAR_8->data[FUNC_7(VAR_10, 4)], VAR_11,
    VAR_8->data, VAR_10, VAR_4);
 FUNC_5();

 return 0;
}
