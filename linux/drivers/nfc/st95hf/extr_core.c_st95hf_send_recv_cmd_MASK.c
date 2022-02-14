
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* spidev; } ;
struct st95hf_context {TYPE_2__ spicontext; } ;
struct param_list {int param_offset; unsigned char new_param_val; } ;
struct device {int dummy; } ;
typedef enum st95hf_cmd_list { ____Placeholder_st95hf_cmd_list } st95hf_cmd_list ;
struct TYPE_7__ {int cmd_len; int no_cmd_params; unsigned char cmd_id; scalar_t__ req; int cmd_params; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (struct device*,char*,unsigned char) ;
 int FUNC_1 (unsigned char*,int ,unsigned char) ;
 int FUNC_2 (TYPE_2__*,unsigned char*) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct st95hf_context *VAR_6,
    enum st95hf_cmd_list VAR_7,
    int VAR_8,
    struct param_list *VAR_9,
    bool VAR_10)
{
 unsigned char VAR_11[VAR_2];
 int VAR_12, VAR_13;
 struct device *VAR_14 = &VAR_6->spicontext.spidev->dev;

 if (VAR_5[VAR_7].cmd_len > VAR_2)
  return -VAR_0;
 if (VAR_5[VAR_7].no_cmd_params < VAR_8)
  return -VAR_0;
 if (VAR_8 && !VAR_9)
  return -VAR_0;

 VAR_11[0] = VAR_3;
 VAR_11[1] = VAR_5[VAR_7].cmd_id;
 VAR_11[2] = VAR_5[VAR_7].no_cmd_params;

 FUNC_1(&VAR_11[3], VAR_5[VAR_7].cmd_params,
        VAR_11[2]);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (VAR_9[VAR_12].param_offset >= VAR_5[VAR_7].no_cmd_params)
   return -VAR_0;
  VAR_11[3 + VAR_9[VAR_12].param_offset] =
      VAR_9[VAR_12].new_param_val;
 }

 VAR_13 = FUNC_3(&VAR_6->spicontext,
         VAR_11,
         VAR_5[VAR_7].cmd_len,
         VAR_5[VAR_7].req);
 if (VAR_13) {
  FUNC_0(VAR_14, "st95hf_spi_send failed with error %d\n", VAR_13);
  return VAR_13;
 }

 if (VAR_5[VAR_7].req == VAR_4 && VAR_10) {
  unsigned char VAR_15[2];

  VAR_13 = FUNC_2(&VAR_6->spicontext,
            VAR_15);
  if (VAR_13 < 0) {
   FUNC_0(VAR_14, "spi error from st95hf_spi_recv_response(), err = 0x%x\n",
    VAR_13);
   return VAR_13;
  }

  if (VAR_15[0]) {
   FUNC_0(VAR_14, "st95hf error from st95hf_spi_recv_response(), err = 0x%x\n",
    VAR_15[0]);
   return -VAR_1;
  }
 }

 return 0;
}
