
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int queue_mapping; } ;
struct octeon_device {int num_iqs; } ;



__attribute__((used)) static inline int FUNC_0(struct octeon_device *VAR_0, struct sk_buff *VAR_1)
{
 return VAR_1->queue_mapping % VAR_0->num_iqs;
}
