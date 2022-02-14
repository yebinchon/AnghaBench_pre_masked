
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct scsi_cmnd {int result; } ;
struct aac_hba_resp {int status; } ;
struct aac_dev {TYPE_1__** hba_map; } ;
struct TYPE_2__ {int rmw_nexus; int devtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 size_t FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct aac_dev *VAR_9,
     struct scsi_cmnd *VAR_10,
     struct aac_hba_resp *VAR_11)
{
 switch (VAR_11->status) {
 case 134:
 {
  u32 VAR_12, VAR_13;

  VAR_12 = FUNC_0(FUNC_1(VAR_10));
  VAR_13 = FUNC_2(VAR_10);
  if (VAR_9->hba_map[VAR_12][VAR_13].devtype == VAR_1) {
   VAR_9->hba_map[VAR_12][VAR_13].devtype = VAR_0;
   VAR_9->hba_map[VAR_12][VAR_13].rmw_nexus = 0xffffffff;
  }
  VAR_10->result = VAR_6 << 16 | VAR_3 << 8;
  break;
 }
 case 131:
 case 130:
  VAR_10->result = VAR_7 << 16 |
   VAR_3 << 8 | VAR_8;
  break;
 case 132:
  VAR_10->result = VAR_4 << 16 | VAR_2 << 8;
  break;
 case 133:
  VAR_10->result = VAR_6 << 16 | VAR_3 << 8;
  break;
 case 128:

  VAR_10->result = VAR_7 << 16 | VAR_3 << 8;
  break;
 case 129:
 default:
  VAR_10->result = VAR_5 << 16 | VAR_3 << 8;
  break;
 }
}
