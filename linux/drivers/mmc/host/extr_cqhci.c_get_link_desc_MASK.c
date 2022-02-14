
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cqhci_host {int task_desc_len; } ;


 int * FUNC_0 (struct cqhci_host*,int ) ;

__attribute__((used)) static inline u8 *FUNC_1(struct cqhci_host *VAR_0, u8 VAR_1)
{
 u8 *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 + VAR_0->task_desc_len;
}
