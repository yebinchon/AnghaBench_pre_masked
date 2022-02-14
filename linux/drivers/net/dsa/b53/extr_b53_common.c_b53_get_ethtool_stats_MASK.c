
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_mib_desc {int size; int offset; } ;
struct b53_device {int stats_mutex; } ;


 int FUNC_0 (int) ;
 struct b53_mib_desc* FUNC_1 (struct b53_device*) ;
 unsigned int FUNC_2 (struct b53_device*) ;
 int FUNC_3 (struct b53_device*,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct b53_device*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dsa_switch *VAR_0, int VAR_1, uint64_t *VAR_2)
{
 struct b53_device *VAR_3 = VAR_0->priv;
 const struct b53_mib_desc *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = FUNC_2(VAR_3);
 const struct b53_mib_desc *VAR_6;
 unsigned int VAR_7;
 u64 VAR_8 = 0;

 if (FUNC_5(VAR_3) && VAR_1 == 5)
  VAR_1 = 8;

 FUNC_6(&VAR_3->stats_mutex);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = &VAR_4[VAR_7];

  if (VAR_6->size == 8) {
   FUNC_4(VAR_3, FUNC_0(VAR_1), VAR_6->offset, &VAR_8);
  } else {
   u32 VAR_9;

   FUNC_3(VAR_3, FUNC_0(VAR_1), VAR_6->offset,
       &VAR_9);
   VAR_8 = VAR_9;
  }
  VAR_2[VAR_7] = (u64)VAR_8;
 }

 FUNC_7(&VAR_3->stats_mutex);
}
