
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink {int tx_lock; int mbox_chan; TYPE_1__* tx_pipe; } ;
struct TYPE_2__ {unsigned int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 unsigned int FUNC_2 (struct qcom_glink*) ;
 int FUNC_3 (struct qcom_glink*,void const*,size_t,void const*,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct qcom_glink *VAR_2,
    const void *VAR_3, size_t VAR_4,
    const void *VAR_5, size_t VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = VAR_4 + VAR_6;
 unsigned long VAR_9;
 int VAR_10 = 0;


 if (VAR_8 >= VAR_2->tx_pipe->length)
  return -VAR_1;

 FUNC_4(&VAR_2->tx_lock, VAR_9);

 while (FUNC_2(VAR_2) < VAR_8) {
  if (!VAR_7) {
   VAR_10 = -VAR_0;
   goto out;
  }


  FUNC_5(&VAR_2->tx_lock, VAR_9);

  FUNC_6(10000, 15000);

  FUNC_4(&VAR_2->tx_lock, VAR_9);
 }

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_2->mbox_chan, ((void*)0));
 FUNC_0(VAR_2->mbox_chan, 0);

out:
 FUNC_5(&VAR_2->tx_lock, VAR_9);

 return VAR_10;
}
