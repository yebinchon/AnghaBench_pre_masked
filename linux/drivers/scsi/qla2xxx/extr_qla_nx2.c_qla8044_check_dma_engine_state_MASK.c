
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {struct qla8044_minidump_template_hdr* md_tmplt_hdr; } ;
struct qla8044_minidump_template_hdr {int* saved_state_array; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_qla_host*,scalar_t__,int*) ;

__attribute__((used)) static int
FUNC_1(struct scsi_qla_host *VAR_7)
{
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 int VAR_9 = VAR_6;
 uint32_t VAR_10 = 0, VAR_11 = 0;
 uint64_t VAR_12 = 0;
 struct qla8044_minidump_template_hdr *VAR_13 = ((void*)0);

 VAR_13 = VAR_8->md_tmplt_hdr;
 VAR_10 =
     VAR_13->saved_state_array[VAR_3];
 VAR_12 = VAR_1 +
  (VAR_10 * VAR_4);


 VAR_9 = FUNC_0(VAR_7,
     (VAR_12 + VAR_2),
     &VAR_11);
 if (VAR_9)
  return VAR_5;


 if (VAR_11 & VAR_0)
  return VAR_6;

 return VAR_5;
}
