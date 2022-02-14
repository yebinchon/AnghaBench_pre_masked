
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hns_nic_ring_data {struct hnae_ring* ring; } ;
struct hnae_ring {scalar_t__ io_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hnae_ring*) ;
 int FUNC_1 (struct hns_nic_ring_data*,int) ;
 int FUNC_2 (struct hns_nic_ring_data*,struct sk_buff**,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 void FUNC_5 (struct hns_nic_ring_data*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct hns_nic_ring_data *VAR_2,
          int VAR_3, void *VAR_4)
{
 struct hnae_ring *VAR_5 = VAR_2->ring;
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8;

 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_5->io_base + VAR_1);
 FUNC_4();

 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 VAR_7 -= VAR_13;

 while (VAR_9 < VAR_3 && VAR_10 < VAR_7) {

  if (VAR_11 + VAR_13 >= 16) {
   FUNC_1(VAR_2,
       VAR_11 + VAR_13);
   VAR_11 = 0;
   VAR_13 = FUNC_0(VAR_5);
  }


  VAR_12 = FUNC_2(VAR_2, &VAR_6, &VAR_8);
  if (FUNC_6(!VAR_6))
   goto out;

  VAR_10 += VAR_8;
  VAR_11 += VAR_8;
  if (FUNC_6(VAR_12)) {
   VAR_9++;
   continue;
  }


  ((void (*)(struct hns_nic_ring_data *, struct sk_buff *))VAR_4)(
       VAR_2, VAR_6);
  VAR_9++;
 }

out:

 if (VAR_11 + VAR_13 > 0)
  FUNC_1(VAR_2,
      VAR_11 + VAR_13);

 return VAR_9;
}
