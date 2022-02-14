
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct req_que {scalar_t__ ring; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct qla_flt_location {int start_hi; int start_lo; int sig; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,char*,int) ;
 int FUNC_9 (scalar_t__,TYPE_1__*,int,char*,char const*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (scalar_t__,TYPE_1__*,int,struct qla_flt_location*,int) ;
 int FUNC_11 (int ,TYPE_1__*,int,char*,int) ;
 int VAR_11 ;
 int FUNC_12 (TYPE_1__*,int*,int,int) ;

__attribute__((used)) static int
FUNC_13(scsi_qla_host_t *VAR_12, uint32_t *VAR_13)
{
 const char *VAR_14, *VAR_15[] = { "DEF", "PCI" };
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18, VAR_19, *VAR_20;
 struct qla_hw_data *VAR_21 = VAR_12->hw;
 struct req_que *VAR_22 = VAR_21->req_q_map[0];
 struct qla_flt_location *VAR_23 = (void *)VAR_22->ring;
 uint32_t *VAR_24 = (void *)VAR_22->ring;
 uint8_t *VAR_25 = (void *)VAR_22->ring, *VAR_26, VAR_27;






 VAR_14 = VAR_15[0];
 *VAR_13 = 0;
 if (FUNC_1(VAR_21))
  *VAR_13 = VAR_2;
 else if (FUNC_2(VAR_21))
  *VAR_13 = VAR_1;
 else if (FUNC_5(VAR_21))
  *VAR_13 = VAR_4;
 else if (FUNC_0(VAR_21)) {
  *VAR_13 = VAR_5;
  goto end;
 } else if (FUNC_6(VAR_21) || FUNC_3(VAR_21)) {
  *VAR_13 = VAR_6;
  goto end;
 } else if (FUNC_4(VAR_21)) {
  *VAR_13 = VAR_3;
  goto end;
 }


 VAR_16 = 0;
 do {

  FUNC_12(VAR_12, VAR_24, VAR_16 >> 2, 0x20);
  VAR_26 = VAR_25 + (VAR_16 % 4);
  if (VAR_26[0x0] != 0x55 || VAR_26[0x1] != 0xaa)
   goto end;


  VAR_17 = VAR_16 + ((VAR_26[0x19] << 8) | VAR_26[0x18]);
  FUNC_12(VAR_12, VAR_24, VAR_17 >> 2, 0x20);
  VAR_26 = VAR_25 + (VAR_16 % 4);


  if (VAR_26[0x0] != 'P' || VAR_26[0x1] != 'C' ||
      VAR_26[0x2] != 'I' || VAR_26[0x3] != 'R')
   goto end;

  VAR_27 = VAR_26[0x15] & VAR_0;


  VAR_16 += ((VAR_26[0x11] << 8) | VAR_26[0x10]) * 512;
 } while (!VAR_27);


 FUNC_12(VAR_12, VAR_24, VAR_16 >> 2, sizeof(*VAR_23) >> 2);
 if (FUNC_8(VAR_23->sig, "QFLT", 4))
  goto end;

 VAR_20 = (void *)VAR_22->ring;
 VAR_18 = sizeof(*VAR_23) / sizeof(*VAR_20);
 for (VAR_19 = 0; VAR_18--; VAR_20++)
  VAR_19 += FUNC_7(*VAR_20);
 if (VAR_19) {
  FUNC_11(VAR_11, VAR_12, 0x0045,
      "Inconsistent FLTL detected: checksum=0x%x.\n", VAR_19);
  FUNC_10(VAR_10 + VAR_9, VAR_12, 0x010e,
      VAR_23, sizeof(*VAR_23));
  return VAR_7;
 }


 VAR_14 = VAR_15[1];
 *VAR_13 = (FUNC_7(VAR_23->start_hi) << 16 |
     FUNC_7(VAR_23->start_lo)) >> 2;
end:
 FUNC_9(VAR_10, VAR_12, 0x0046,
     "FLTL[%s] = 0x%x.\n",
     VAR_14, *VAR_13);
 return VAR_8;
}
