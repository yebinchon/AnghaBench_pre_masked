
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct srp_indirect_buf {int dummy; } ;
struct srp_direct_buf {int dummy; } ;
struct srp_cmd {int add_cdb_len; int buf_fmt; int add_data; } ;
struct TYPE_2__ {int t_data_nents; } ;
struct ibmvscsis_cmd {TYPE_1__ se_cmd; } ;
typedef int srp_rdma_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (struct srp_cmd*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct srp_cmd*) ;
 int FUNC_3 (struct ibmvscsis_cmd*,struct srp_direct_buf*,int,int ,int,int) ;
 int FUNC_4 (struct ibmvscsis_cmd*,struct srp_cmd*,struct srp_indirect_buf*,int,int ,int,int) ;

int FUNC_5(struct ibmvscsis_cmd *VAR_3, struct srp_cmd *VAR_4,
        srp_rdma_t VAR_5, int VAR_6, int VAR_7)
{
 struct srp_direct_buf *VAR_8;
 struct srp_indirect_buf *VAR_9;
 enum dma_data_direction VAR_10;
 int VAR_11, VAR_12 = 0;
 u8 VAR_13;

 if (!VAR_3->se_cmd.t_data_nents)
  return 0;

 VAR_11 = VAR_4->add_cdb_len & ~3;

 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10 == VAR_0)
  VAR_11 += FUNC_0(VAR_4);

 if (VAR_10 == VAR_1)
  VAR_13 = VAR_4->buf_fmt >> 4;
 else
  VAR_13 = VAR_4->buf_fmt & ((1U << 4) - 1);

 switch (VAR_13) {
 case 128:
  break;
 case 130:
  VAR_8 = (struct srp_direct_buf *)(VAR_4->add_data + VAR_11);
  VAR_12 = FUNC_3(VAR_3, VAR_8, VAR_10, VAR_5, VAR_6, VAR_7);
  break;
 case 129:
  VAR_9 = (struct srp_indirect_buf *)(VAR_4->add_data + VAR_11);
  VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_9, VAR_10, VAR_5, VAR_6,
     VAR_7);
  break;
 default:
  FUNC_1("Unknown format %d %x\n", VAR_10, VAR_13);
  VAR_12 = -VAR_2;
 }

 return VAR_12;
}
