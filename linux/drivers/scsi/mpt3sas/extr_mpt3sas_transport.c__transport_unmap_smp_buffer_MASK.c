
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bsg_buffer {int sg_list; int payload_len; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,void*,int ) ;
 int FUNC_1 (struct device*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct device *VAR_1, struct bsg_buffer *VAR_2,
  dma_addr_t VAR_3, void *VAR_4)
{
 if (VAR_4)
  FUNC_0(VAR_1, VAR_2->payload_len, VAR_4, VAR_3);
 else
  FUNC_1(VAR_1, VAR_2->sg_list, 1, VAR_0);
}
