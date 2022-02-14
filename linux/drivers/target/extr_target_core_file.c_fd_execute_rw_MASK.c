
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_device {int dummy; } ;
struct se_cmd {scalar_t__ data_length; struct se_device* se_dev; } ;
struct scatterlist {int dummy; } ;
struct fd_dev {int fbd_flags; } ;
typedef int sense_reason_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct se_cmd*,struct scatterlist*,int ,int) ;
 int FUNC_2 (struct se_cmd*,struct scatterlist*,int ,int) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_3, struct scatterlist *VAR_4, u32 VAR_5,
       enum dma_data_direction VAR_6)
{
 struct se_device *VAR_7 = VAR_3->se_dev;
 struct fd_dev *VAR_8 = FUNC_0(VAR_7);





 if (VAR_3->data_length > VAR_1) {
  FUNC_3("FILEIO: Not able to process I/O of %u bytes due to"
         "FD_MAX_BYTES: %u iovec count limitation\n",
   VAR_3->data_length, VAR_1);
  return VAR_2;
 }

 if (VAR_8->fbd_flags & VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
}
