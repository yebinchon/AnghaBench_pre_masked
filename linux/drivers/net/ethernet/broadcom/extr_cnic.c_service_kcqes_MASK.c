
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cnic_ulp_ops {int (* indicate_kcqes ) (int ,TYPE_1__**,int) ;} ;
struct cnic_local {TYPE_1__** completed_kcq; int * ulp_handle; int * ulp_ops; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {scalar_t__ kcqe_op_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cnic_dev*,int ,int) ;
 scalar_t__ FUNC_2 (struct cnic_ulp_ops*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 struct cnic_ulp_ops* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__**,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct cnic_dev *VAR_11, int VAR_12)
{
 struct cnic_local *VAR_13 = VAR_11->cnic_priv;
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_14 = 0;
 VAR_15 = 1;
 while (VAR_12) {
  struct cnic_ulp_ops *VAR_17;
  int VAR_18;
  u32 VAR_19 = VAR_13->completed_kcq[VAR_14]->kcqe_op_flag;
  u32 VAR_20 = FUNC_0(VAR_19);

  if (FUNC_8(VAR_19 & VAR_10))
   VAR_16++;

  while (VAR_15 < VAR_12) {
   u32 VAR_21 = VAR_13->completed_kcq[VAR_14 + VAR_15]->kcqe_op_flag;

   if (FUNC_0(VAR_21) != VAR_20)
    break;

   if (FUNC_8(VAR_21 & VAR_10))
    VAR_16++;
   VAR_15++;
  }

  if (VAR_20 == VAR_9)
   VAR_18 = VAR_3;
  else if (VAR_20 == VAR_8)
   VAR_18 = VAR_1;
  else if (VAR_20 == VAR_7)
   VAR_18 = VAR_0;
  else if (VAR_20 == VAR_6)
   VAR_18 = VAR_2;
  else if (VAR_20 == VAR_5)
   goto end;
  else {
   FUNC_3(VAR_11->netdev, "Unknown type of KCQE(0x%x)\n",
       VAR_19);
   goto end;
  }

  FUNC_5();
  VAR_17 = FUNC_4(VAR_13->ulp_ops[VAR_18]);
  if (FUNC_2(VAR_17)) {
   VAR_17->indicate_kcqes(VAR_13->ulp_handle[VAR_18],
        VAR_13->completed_kcq + VAR_14, VAR_15);
  }
  FUNC_6();
end:
  VAR_12 -= VAR_15;
  VAR_14 += VAR_15;
  VAR_15 = 1;
 }
 if (FUNC_8(VAR_16))
  FUNC_1(VAR_11, VAR_4, VAR_16);
}
