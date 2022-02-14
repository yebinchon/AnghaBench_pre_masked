
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {scalar_t__ Status; int Command; } ;
struct smb2_sess_setup_rsp {int SecurityBufferLength; int SecurityBufferOffset; } ;
struct smb2_read_rsp {int DataOffset; int DataLength; } ;
struct smb2_query_info_rsp {int OutputBufferLength; int OutputBufferOffset; } ;
struct smb2_query_directory_rsp {int OutputBufferLength; int OutputBufferOffset; } ;
struct smb2_negotiate_rsp {int SecurityBufferLength; int SecurityBufferOffset; } ;
struct smb2_ioctl_rsp {int OutputCount; int OutputOffset; } ;
struct smb2_err_rsp {scalar_t__ StructureSize; } ;
struct smb2_create_rsp {int CreateContextsLength; int CreateContextsOffset; } ;




 scalar_t__ VAR_0 ;






 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

char *
FUNC_3(int *VAR_3, int *VAR_4, struct smb2_sync_hdr *VAR_5)
{
 *VAR_3 = 0;
 *VAR_4 = 0;


 if (VAR_5->Status && VAR_5->Status != VAR_1 &&
     (((struct smb2_err_rsp *)VAR_5)->StructureSize) ==
      VAR_0)
  return ((void*)0);






 switch (VAR_5->Command) {
 case 132:
  *VAR_3 = FUNC_1(
    ((struct smb2_negotiate_rsp *)VAR_5)->SecurityBufferOffset);
  *VAR_4 = FUNC_1(
    ((struct smb2_negotiate_rsp *)VAR_5)->SecurityBufferLength);
  break;
 case 128:
  *VAR_3 = FUNC_1(
    ((struct smb2_sess_setup_rsp *)VAR_5)->SecurityBufferOffset);
  *VAR_4 = FUNC_1(
    ((struct smb2_sess_setup_rsp *)VAR_5)->SecurityBufferLength);
  break;
 case 134:
  *VAR_3 = FUNC_2(
      ((struct smb2_create_rsp *)VAR_5)->CreateContextsOffset);
  *VAR_4 = FUNC_2(
      ((struct smb2_create_rsp *)VAR_5)->CreateContextsLength);
  break;
 case 130:
  *VAR_3 = FUNC_1(
      ((struct smb2_query_info_rsp *)VAR_5)->OutputBufferOffset);
  *VAR_4 = FUNC_2(
      ((struct smb2_query_info_rsp *)VAR_5)->OutputBufferLength);
  break;
 case 129:

  *VAR_3 = ((struct smb2_read_rsp *)VAR_5)->DataOffset;
  *VAR_4 = FUNC_2(((struct smb2_read_rsp *)VAR_5)->DataLength);
  break;
 case 131:
  *VAR_3 = FUNC_1(
    ((struct smb2_query_directory_rsp *)VAR_5)->OutputBufferOffset);
  *VAR_4 = FUNC_2(
    ((struct smb2_query_directory_rsp *)VAR_5)->OutputBufferLength);
  break;
 case 133:
  *VAR_3 = FUNC_2(
    ((struct smb2_ioctl_rsp *)VAR_5)->OutputOffset);
  *VAR_4 = FUNC_2(
    ((struct smb2_ioctl_rsp *)VAR_5)->OutputCount);
  break;
 case 135:
 default:

  FUNC_0(VAR_2, "no length check for command\n");
  break;
 }





 if (*VAR_3 > 4096) {
  FUNC_0(VAR_2, "offset %d too large, data area ignored\n", *VAR_3);
  *VAR_4 = 0;
  *VAR_3 = 0;
 } else if (*VAR_3 < 0) {
  FUNC_0(VAR_2, "negative offset %d to data invalid ignore data area\n",
    *VAR_3);
  *VAR_3 = 0;
  *VAR_4 = 0;
 } else if (*VAR_4 < 0) {
  FUNC_0(VAR_2, "negative data length %d invalid, data area ignored\n",
    *VAR_4);
  *VAR_4 = 0;
 } else if (*VAR_4 > 128 * 1024) {
  FUNC_0(VAR_2, "data area larger than 128K: %d\n", *VAR_4);
  *VAR_4 = 0;
 }


 if ((*VAR_3 != 0) && (*VAR_4 != 0))
  return (char *)VAR_5 + *VAR_3;
 else
  return ((void*)0);
}
