
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmmdev_hgcm_function_parameter32 {int type; } ;
struct vmmdev_hgcm_function_parameter {int type; } ;
struct vbg_session {int requestor; int * hgcm_client_ids; } ;
struct TYPE_2__ {int size_in; int size_out; int rc; } ;
struct vbg_ioctl_hgcm_call {int parm_count; TYPE_1__ hdr; int timeout_ms; int function; int client_id; } ;
struct vbg_dev {int session_mutex; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 struct vmmdev_hgcm_function_parameter* FUNC_2 (struct vbg_ioctl_hgcm_call*) ;
 struct vmmdev_hgcm_function_parameter32* FUNC_3 (struct vbg_ioctl_hgcm_call*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct vbg_dev*,int ,int ,int ,int ,struct vmmdev_hgcm_function_parameter*,int,int *) ;
 int FUNC_9 (struct vbg_dev*,int ,int ,int ,int ,struct vmmdev_hgcm_function_parameter32*,int,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct vbg_dev *VAR_8,
          struct vbg_session *VAR_9, bool VAR_10,
          struct vbg_ioctl_hgcm_call *VAR_11)
{
 size_t VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;

 if (VAR_11->hdr.size_in < sizeof(*VAR_11))
  return -VAR_3;

 if (VAR_11->hdr.size_in != VAR_11->hdr.size_out)
  return -VAR_3;

 if (VAR_11->parm_count > VAR_7)
  return -VAR_1;

 VAR_13 = VAR_11->client_id;
 if (VAR_13 == 0 || VAR_13 == VAR_5)
  return -VAR_3;

 VAR_12 = sizeof(*VAR_11);
 if (VAR_10)
  VAR_12 += VAR_11->parm_count *
          sizeof(struct vmmdev_hgcm_function_parameter32);
 else
  VAR_12 += VAR_11->parm_count *
          sizeof(struct vmmdev_hgcm_function_parameter);
 if (VAR_11->hdr.size_in < VAR_12) {
  FUNC_6("VBG_IOCTL_HGCM_CALL: hdr.size_in %d required size is %zd\n",
     VAR_11->hdr.size_in, VAR_12);
  return -VAR_3;
 }
 VAR_11->hdr.size_out = VAR_12;


 if (VAR_10) {
  struct vmmdev_hgcm_function_parameter32 *VAR_16 =
   FUNC_3(VAR_11);

  for (VAR_14 = 0; VAR_14 < VAR_11->parm_count; VAR_14++)
   if (!FUNC_10(VAR_16[VAR_14].type))
    return -VAR_3;
 } else {
  struct vmmdev_hgcm_function_parameter *VAR_17 =
   FUNC_2(VAR_11);

  for (VAR_14 = 0; VAR_14 < VAR_11->parm_count; VAR_14++)
   if (!FUNC_10(VAR_17[VAR_14].type))
    return -VAR_3;
 }




 FUNC_4(&VAR_8->session_mutex);
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9->hgcm_client_ids); VAR_14++)
  if (VAR_9->hgcm_client_ids[VAR_14] == VAR_13)
   break;
 FUNC_5(&VAR_8->session_mutex);
 if (VAR_14 >= FUNC_0(VAR_9->hgcm_client_ids)) {
  FUNC_6("VBG_IOCTL_HGCM_CALL: INVALID handle. u32Client=%#08x\n",
     VAR_13);
  return -VAR_3;
 }

 if (FUNC_1(VAR_0) && VAR_10)
  VAR_15 = FUNC_9(VAR_8, VAR_9->requestor, VAR_13,
          VAR_11->function, VAR_11->timeout_ms,
          FUNC_3(VAR_11),
          VAR_11->parm_count, &VAR_11->hdr.rc);
 else
  VAR_15 = FUNC_8(VAR_8, VAR_9->requestor, VAR_13,
        VAR_11->function, VAR_11->timeout_ms,
        FUNC_2(VAR_11),
        VAR_11->parm_count, &VAR_11->hdr.rc);

 if (VAR_15 == -VAR_1) {

  VAR_11->hdr.rc = VAR_6;
  VAR_15 = 0;
 }

 if (VAR_15 && VAR_15 != -VAR_2 && VAR_15 != -VAR_4)
  FUNC_7("VBG_IOCTL_HGCM_CALL error: %d\n", VAR_15);

 return VAR_15;
}
