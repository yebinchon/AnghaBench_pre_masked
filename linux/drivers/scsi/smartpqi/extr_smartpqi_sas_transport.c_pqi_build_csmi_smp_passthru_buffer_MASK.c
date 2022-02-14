
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sas_address; int phy_identifier; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct TYPE_6__ {int payload_len; int sg_cnt; } ;
struct TYPE_5__ {int payload_len; int sg_list; } ;
struct bsg_job {TYPE_3__ reply_payload; TYPE_2__ request_payload; } ;
struct bmic_csmi_smp_passthru {int request; int response_length; int request_length; int destination_sas_address; scalar_t__ connection_rate; scalar_t__ port_identifier; int phy_identifier; } ;
struct bmic_csmi_ioctl_header {int length; int control_code; int timeout; int header_length; } ;
struct bmic_csmi_smp_passthru_buffer {struct bmic_csmi_smp_passthru parameters; struct bmic_csmi_ioctl_header ioctl_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bmic_csmi_smp_passthru_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static struct bmic_csmi_smp_passthru_buffer *
FUNC_4(struct sas_rphy *VAR_4,
 struct bsg_job *VAR_5)
{
 struct bmic_csmi_smp_passthru_buffer *VAR_6;
 struct bmic_csmi_ioctl_header *VAR_7;
 struct bmic_csmi_smp_passthru *VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return ((void*)0);

 VAR_9 = VAR_5->request_payload.payload_len;
 VAR_10 = VAR_5->reply_payload.payload_len;

 VAR_7 = &VAR_6->ioctl_header;
 FUNC_2(sizeof(VAR_6->ioctl_header),
  &VAR_7->header_length);
 FUNC_2(VAR_1, &VAR_7->timeout);
 FUNC_2(VAR_0,
  &VAR_7->control_code);
 FUNC_2(sizeof(VAR_6->parameters), &VAR_7->length);

 VAR_8 = &VAR_6->parameters;
 VAR_8->phy_identifier = VAR_4->identify.phy_identifier;
 VAR_8->port_identifier = 0;
 VAR_8->connection_rate = 0;
 FUNC_1(VAR_4->identify.sas_address,
  &VAR_8->destination_sas_address);

 if (VAR_9 > VAR_3)
  VAR_9 -= VAR_3;

 FUNC_2(VAR_9, &VAR_8->request_length);

 FUNC_2(VAR_10, &VAR_8->response_length);

 FUNC_3(VAR_5->request_payload.sg_list,
  VAR_5->reply_payload.sg_cnt, &VAR_8->request,
  VAR_9);

 return VAR_6;
}
