
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct qcom_nand_host {scalar_t__ last_command; int status; } ;
struct qcom_nand_controller {int* data_buffer; scalar_t__ buf_start; scalar_t__ buf_count; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 struct qcom_nand_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static uint8_t FUNC_2(struct nand_chip *VAR_3)
{
 struct qcom_nand_host *VAR_4 = FUNC_1(VAR_3);
 struct qcom_nand_controller *VAR_5 = FUNC_0(VAR_3);
 u8 *VAR_6 = VAR_5->data_buffer;
 u8 VAR_7 = 0x0;

 if (VAR_4->last_command == VAR_0) {
  VAR_7 = VAR_4->status;

  VAR_4->status = VAR_1 | VAR_2;

  return VAR_7;
 }

 if (VAR_5->buf_start < VAR_5->buf_count)
  VAR_7 = VAR_6[VAR_5->buf_start++];

 return VAR_7;
}
