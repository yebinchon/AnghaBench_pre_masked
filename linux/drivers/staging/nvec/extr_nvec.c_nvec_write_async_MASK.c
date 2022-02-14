
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {short* data; short size; int node; } ;
struct nvec_chip {int tx_work; int tx_lock; int tx_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (short*,unsigned char const*,short) ;
 struct nvec_msg* FUNC_2 (struct nvec_chip*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct nvec_chip *VAR_2, const unsigned char *VAR_3,
       short VAR_4)
{
 struct nvec_msg *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_1);

 if (!VAR_5)
  return -VAR_0;

 VAR_5->data[0] = VAR_4;
 FUNC_1(VAR_5->data + 1, VAR_3, VAR_4);
 VAR_5->size = VAR_4 + 1;

 FUNC_4(&VAR_2->tx_lock, VAR_6);
 FUNC_0(&VAR_5->node, &VAR_2->tx_data);
 FUNC_5(&VAR_2->tx_lock, VAR_6);

 FUNC_3(&VAR_2->tx_work);

 return 0;
}
