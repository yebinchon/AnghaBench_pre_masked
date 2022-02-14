
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvme_tcp_queue {scalar_t__ data_digest; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct nvme_tcp_queue *VAR_1)
{
 return VAR_1->data_digest ? VAR_0 : 0;
}
