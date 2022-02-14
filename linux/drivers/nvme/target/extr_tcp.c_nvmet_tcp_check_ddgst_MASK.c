
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvmet_tcp_queue {int idx; } ;
struct nvme_tcp_hdr {int flags; scalar_t__ hlen; int plen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvmet_tcp_queue*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_queue *VAR_3, void *VAR_4)
{
 struct nvme_tcp_hdr *VAR_5 = VAR_4;
 u8 VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5->plen) - VAR_5->hlen -
  (VAR_5->flags & VAR_2 ? VAR_6 : 0);

 if (FUNC_3(VAR_7 && !(VAR_5->flags & VAR_1))) {
  FUNC_2("queue %d: data digest flag is cleared\n", VAR_3->idx);
  return -VAR_0;
 }

 return 0;
}
