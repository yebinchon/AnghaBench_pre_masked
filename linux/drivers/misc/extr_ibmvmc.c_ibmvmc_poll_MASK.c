
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvmc_hmc {scalar_t__ queue_head; scalar_t__ queue_tail; } ;
struct ibmvmc_file_session {struct ibmvmc_hmc* hmc; } ;
struct file {struct ibmvmc_file_session* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_3, poll_table *VAR_4)
{
 struct ibmvmc_file_session *VAR_5;
 struct ibmvmc_hmc *VAR_6;
 unsigned int VAR_7 = 0;

 VAR_5 = VAR_3->private_data;
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5->hmc;
 if (!VAR_6)
  return 0;

 FUNC_0(VAR_3, &VAR_2, VAR_4);

 if (VAR_6->queue_head != VAR_6->queue_tail)
  VAR_7 |= VAR_0 | VAR_1;

 return VAR_7;
}
