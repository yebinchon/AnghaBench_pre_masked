
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qpnp_tm_chip {int thresh; int stage; scalar_t__ subtype; int initialized; int lock; scalar_t__ temp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int* VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qpnp_tm_chip*) ;
 int FUNC_3 (struct qpnp_tm_chip*) ;
 int FUNC_4 (struct qpnp_tm_chip*,int ,int*) ;
 int FUNC_5 (struct qpnp_tm_chip*,int) ;
 int FUNC_6 (struct qpnp_tm_chip*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct qpnp_tm_chip *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 u8 VAR_13 = 0;
 int VAR_14;

 FUNC_0(&VAR_10->lock);

 VAR_12 = FUNC_4(VAR_10, VAR_3, &VAR_13);
 if (VAR_12 < 0)
  goto out;

 VAR_10->thresh = VAR_13 & VAR_5;
 VAR_10->temp = VAR_1;

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12 < 0)
  goto out;
 VAR_10->stage = VAR_12;

 VAR_11 = VAR_10->subtype == VAR_4
  ? VAR_10->stage : VAR_9[VAR_10->stage];

 if (VAR_11)
  VAR_10->temp = VAR_10->thresh * VAR_8 +
        (VAR_11 - 1) * VAR_6 +
        VAR_7;

 VAR_14 = FUNC_2(VAR_10);
 VAR_12 = FUNC_5(VAR_10, VAR_14);
 if (VAR_12 < 0)
  goto out;


 VAR_13 = VAR_0;
 VAR_12 = FUNC_6(VAR_10, VAR_2, VAR_13);

 VAR_10->initialized = 1;

out:
 FUNC_1(&VAR_10->lock);
 return VAR_12;
}
