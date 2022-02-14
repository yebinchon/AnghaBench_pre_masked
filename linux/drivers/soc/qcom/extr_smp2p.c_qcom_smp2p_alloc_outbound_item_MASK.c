
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp2p_smem_item {unsigned int remote_pid; int version; scalar_t__ valid_entries; int total_entries; int local_pid; int magic; } ;
struct qcom_smp2p {unsigned int* smem_items; unsigned int remote_pid; struct smp2p_smem_item* out; int local_pid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smp2p_smem_item*) ;
 int FUNC_1 (struct smp2p_smem_item*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct smp2p_smem_item*,int ,int) ;
 int FUNC_4 (unsigned int,unsigned int,int) ;
 struct smp2p_smem_item* FUNC_5 (unsigned int,unsigned int,int *) ;
 int FUNC_6 (struct qcom_smp2p*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct qcom_smp2p *VAR_5)
{
 struct smp2p_smem_item *VAR_6;
 unsigned VAR_7 = VAR_5->smem_items[VAR_4];
 unsigned VAR_8 = VAR_5->remote_pid;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_8, VAR_7, sizeof(*VAR_6));
 if (VAR_9 < 0 && VAR_9 != -VAR_0) {
  if (VAR_9 != -VAR_1)
   FUNC_2(VAR_5->dev,
    "unable to allocate local smp2p item\n");
  return VAR_9;
 }

 VAR_6 = FUNC_5(VAR_8, VAR_7, ((void*)0));
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_5->dev, "Unable to acquire local smp2p item\n");
  return FUNC_1(VAR_6);
 }

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->magic = VAR_2;
 VAR_6->local_pid = VAR_5->local_pid;
 VAR_6->remote_pid = VAR_5->remote_pid;
 VAR_6->total_entries = VAR_3;
 VAR_6->valid_entries = 0;





 FUNC_7();
 VAR_6->version = 1;

 FUNC_6(VAR_5);

 VAR_5->out = VAR_6;

 return 0;
}
