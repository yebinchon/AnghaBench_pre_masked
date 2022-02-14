
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union vnic_rss_cpu {TYPE_1__* cpu; } ;
typedef int u8 ;
struct enic {unsigned int rq_count; int pdev; int devcmd_lock; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned int* b; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,int ,int) ;
 union vnic_rss_cpu* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,union vnic_rss_cpu*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct enic *VAR_1, u8 VAR_2)
{
 dma_addr_t VAR_3;
 union vnic_rss_cpu *VAR_4 = ((void*)0);
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_1->pdev,
  sizeof(union vnic_rss_cpu), &VAR_3);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < (1 << VAR_2); VAR_5++)
  (*VAR_4).cpu[VAR_5/4].b[VAR_5%4] = VAR_5 % VAR_1->rq_count;

 FUNC_3(&VAR_1->devcmd_lock);
 VAR_6 = FUNC_0(VAR_1,
  VAR_3,
  sizeof(union vnic_rss_cpu));
 FUNC_4(&VAR_1->devcmd_lock);

 FUNC_2(VAR_1->pdev, sizeof(union vnic_rss_cpu),
  VAR_4, VAR_3);

 return VAR_6;
}
