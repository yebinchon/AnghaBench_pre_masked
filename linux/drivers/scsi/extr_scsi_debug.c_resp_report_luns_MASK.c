
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_lun {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;
typedef int arr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdebug_dev_info*) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,struct scsi_lun*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_5 (struct scsi_cmnd*,int *,int,unsigned int) ;
 int FUNC_6 (char*,unsigned char,...) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (unsigned int,int *) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*,int ) ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_6,
       struct sdebug_dev_info *VAR_7)
{
 unsigned char *VAR_8 = VAR_6->cmnd;
 unsigned int VAR_9;
 unsigned char VAR_10;
 u64 VAR_11;
 struct scsi_lun *VAR_12;
 u8 VAR_13[VAR_0 * sizeof(struct scsi_lun)];
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22 = 0;
 const int VAR_23 = sizeof(struct scsi_lun);

 FUNC_0(VAR_7);

 VAR_10 = VAR_8[2];
 VAR_9 = FUNC_1(VAR_8 + 6);

 if (VAR_9 < 4) {
  FUNC_7("alloc len too small %d\n", VAR_9);
  FUNC_4(VAR_6, VAR_2, 6, -1);
  return VAR_3;
 }

 switch (VAR_10) {
 case 0:
  VAR_14 = VAR_4;
  VAR_15 = 0;
  break;
 case 1:
  VAR_14 = 0;
  VAR_15 = 1;
  break;
 case 2:
  VAR_14 = VAR_4;
  VAR_15 = 1;
  break;
 case 0x10:
 case 0x11:
 case 0x12:
 default:
  FUNC_6("select report invalid %d\n", VAR_10);
  FUNC_4(VAR_6, VAR_2, 2, -1);
  return VAR_3;
 }

 if (VAR_5 && (VAR_14 > 0))
  --VAR_14;

 VAR_16 = VAR_14 + VAR_15;
 VAR_17 = VAR_16 * VAR_23;
 FUNC_10(VAR_6, FUNC_9(VAR_6));
 FUNC_6("select_report %d luns = %d wluns = %d no_lun0 %d\n",
   VAR_10, VAR_14, VAR_15, VAR_5);


 VAR_11 = VAR_5 ? 1 : 0;
 for (VAR_18 = 0, VAR_19 = 0, VAR_21 = 0; 1; ++VAR_18, VAR_19 = 0) {
  FUNC_3(VAR_13, 0, sizeof(VAR_13));
  VAR_12 = (struct scsi_lun *)&VAR_13[0];
  if (VAR_18 == 0) {
   FUNC_8(VAR_17, &VAR_13[0]);
   ++VAR_12;
   VAR_19 = 1;
  }
  for ( ; VAR_19 < VAR_0; ++VAR_19, ++VAR_12) {
   if ((VAR_18 * VAR_0) + VAR_19 > VAR_14)
    break;
   FUNC_2(VAR_11++, VAR_12);
  }
  if (VAR_19 < VAR_0)
   break;
  VAR_20 = VAR_19 * VAR_23;
  VAR_21 = FUNC_5(VAR_6, VAR_13, VAR_20, VAR_22);
  if (VAR_21)
   return VAR_21;
  VAR_22 += VAR_20;
 }
 if (VAR_15) {
  FUNC_2(VAR_1, VAR_12);
  ++VAR_19;
 }
 if (VAR_19 > 0)
  VAR_21 = FUNC_5(VAR_6, VAR_13, VAR_19 * VAR_23, VAR_22);
 return VAR_21;
}
