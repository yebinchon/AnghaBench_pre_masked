
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_profile {int mask; int log_max_qp; } ;
struct TYPE_3__ {int * hca_cur; } ;
struct mlx5_core_dev {TYPE_1__ caps; struct mlx5_profile* profile; } ;
struct TYPE_4__ {int log_max_qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 size_t VAR_2 ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,void*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int ,int) ;
 int FUNC_10 (struct mlx5_core_dev*,size_t) ;
 int FUNC_11 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_12 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 TYPE_2__* VAR_17 ;
 int FUNC_13 (struct mlx5_core_dev*,void*,int,int ) ;
 int VAR_18 ;
 int FUNC_14 (struct mlx5_core_dev*,int) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_15(struct mlx5_core_dev *VAR_20)
{
 void *VAR_21 = ((void*)0);
 struct mlx5_profile *VAR_22 = VAR_20->profile;
 int VAR_23 = -VAR_0;
 int VAR_24 = FUNC_4(VAR_18);
 void *VAR_25;

 VAR_21 = FUNC_7(VAR_24, VAR_1);
 if (!VAR_21)
  goto query_ex;

 VAR_23 = FUNC_10(VAR_20, VAR_2);
 if (VAR_23)
  goto query_ex;

 VAR_25 = FUNC_0(VAR_18, VAR_21,
       VAR_8);
 FUNC_8(VAR_25, VAR_20->caps.hca_cur[VAR_2],
        FUNC_4(VAR_9));

 FUNC_9(VAR_20, "Current Pkey table size %d Setting new size %d\n",
        FUNC_12(FUNC_1(VAR_20, VAR_15)),
        128);

 FUNC_3(VAR_9, VAR_25, VAR_15,
   FUNC_14(VAR_20, 128));


 if (FUNC_2(VAR_20, VAR_12) < VAR_17[VAR_16].log_max_qp) {
  FUNC_11(VAR_20, "log_max_qp value in current profile is %d, changing it to HCA capability limit (%d)\n",
          VAR_17[VAR_16].log_max_qp,
          FUNC_2(VAR_20, VAR_12));
  VAR_17[VAR_16].log_max_qp = FUNC_2(VAR_20, VAR_12);
 }
 if (VAR_22->mask & VAR_3)
  FUNC_3(VAR_9, VAR_25, VAR_12,
    VAR_22->log_max_qp);


 FUNC_3(VAR_9, VAR_25, VAR_10, 0);




 if (FUNC_2(VAR_20, VAR_19) && VAR_6 > 4096)
  FUNC_3(VAR_9, VAR_25, VAR_19, 1);

 FUNC_3(VAR_9, VAR_25, VAR_13, VAR_5 - 12);

 if (FUNC_2(VAR_20, VAR_7))
  FUNC_3(VAR_9,
    VAR_25,
    VAR_7,
    FUNC_5() >= 128 ? 1 : 0);

 if (FUNC_2(VAR_20, VAR_11))
  FUNC_3(VAR_9, VAR_25, VAR_11, 1);

 if (FUNC_2(VAR_20, VAR_14))
  FUNC_3(VAR_9,
    VAR_25,
    VAR_14,
    FUNC_2(VAR_20, VAR_14));

 VAR_23 = FUNC_13(VAR_20, VAR_21, VAR_24,
         VAR_4);

query_ex:
 FUNC_6(VAR_21);
 return VAR_23;
}
