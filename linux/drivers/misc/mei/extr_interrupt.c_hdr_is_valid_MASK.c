
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_msg_hdr {scalar_t__ length; scalar_t__ dma_ring; scalar_t__ reserved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(u32 VAR_2)
{
 struct mei_msg_hdr *VAR_3;

 VAR_3 = (struct mei_msg_hdr *)&VAR_2;
 if (!VAR_2 || VAR_3->reserved)
  return -VAR_0;

 if (VAR_3->dma_ring && VAR_3->length != VAR_1)
  return -VAR_0;

 return 0;
}
