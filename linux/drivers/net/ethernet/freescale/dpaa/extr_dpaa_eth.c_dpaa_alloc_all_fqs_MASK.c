
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct list_head {int dummy; } ;
struct fm_port_fqs {struct dpaa_fq* tx_defq; struct dpaa_fq* tx_errq; struct dpaa_fq* rx_pcdq; struct dpaa_fq* rx_defq; struct dpaa_fq* rx_errq; } ;
struct dpaa_fq {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*) ;
 struct dpaa_fq* FUNC_2 (struct device*,scalar_t__,int,struct list_head*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct list_head *VAR_11,
         struct fm_port_fqs *VAR_12)
{
 struct dpaa_fq *VAR_13;
 u32 VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_2(VAR_10, 0, 1, VAR_11, VAR_4);
 if (!VAR_13)
  goto fq_alloc_failed;

 VAR_12->rx_errq = &VAR_13[0];

 VAR_13 = FUNC_2(VAR_10, 0, 1, VAR_11, VAR_3);
 if (!VAR_13)
  goto fq_alloc_failed;

 VAR_12->rx_defq = &VAR_13[0];


 if (FUNC_3(&VAR_14, 2 * VAR_0))
  goto fq_alloc_failed;

 VAR_15 = FUNC_0(VAR_14, VAR_0);

 for (VAR_16 = VAR_14; VAR_16 < VAR_15; VAR_16++)
  FUNC_4(VAR_16);

 for (VAR_16 = VAR_15 + VAR_0;
      VAR_16 < (VAR_14 + 2 * VAR_0); VAR_16++)
  FUNC_4(VAR_16);

 VAR_13 = FUNC_2(VAR_10, VAR_15, VAR_0,
    VAR_11, VAR_5);
 if (!VAR_13)
  goto fq_alloc_failed;

 VAR_12->rx_pcdq = &VAR_13[0];

 if (!FUNC_2(VAR_10, 0, VAR_1, VAR_11, VAR_8))
  goto fq_alloc_failed;

 VAR_13 = FUNC_2(VAR_10, 0, 1, VAR_11, VAR_9);
 if (!VAR_13)
  goto fq_alloc_failed;

 VAR_12->tx_errq = &VAR_13[0];

 VAR_13 = FUNC_2(VAR_10, 0, 1, VAR_11, VAR_7);
 if (!VAR_13)
  goto fq_alloc_failed;

 VAR_12->tx_defq = &VAR_13[0];

 if (!FUNC_2(VAR_10, 0, VAR_1, VAR_11, VAR_6))
  goto fq_alloc_failed;

 return 0;

fq_alloc_failed:
 FUNC_1(VAR_10, "dpaa_fq_alloc() failed\n");
 return -VAR_2;
}
