
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_hw {char const* err_str; } ;
typedef enum iavf_admin_queue_err { ____Placeholder_iavf_admin_queue_err } iavf_admin_queue_err ;
 int FUNC_0 (char const*,int,char*,int) ;

const char *FUNC_1(struct iavf_hw *VAR_0, enum iavf_admin_queue_err VAR_1)
{
 switch (VAR_1) {
 case 128:
  return "OK";
 case 131:
  return "IAVF_AQ_RC_EPERM";
 case 137:
  return "IAVF_AQ_RC_ENOENT";
 case 129:
  return "IAVF_AQ_RC_ESRCH";
 case 141:
  return "IAVF_AQ_RC_EINTR";
 case 139:
  return "IAVF_AQ_RC_EIO";
 case 132:
  return "IAVF_AQ_RC_ENXIO";
 case 149:
  return "IAVF_AQ_RC_E2BIG";
 case 147:
  return "IAVF_AQ_RC_EAGAIN";
 case 136:
  return "IAVF_AQ_RC_ENOMEM";
 case 148:
  return "IAVF_AQ_RC_EACCES";
 case 144:
  return "IAVF_AQ_RC_EFAULT";
 case 146:
  return "IAVF_AQ_RC_EBUSY";
 case 145:
  return "IAVF_AQ_RC_EEXIST";
 case 140:
  return "IAVF_AQ_RC_EINVAL";
 case 133:
  return "IAVF_AQ_RC_ENOTTY";
 case 135:
  return "IAVF_AQ_RC_ENOSPC";
 case 134:
  return "IAVF_AQ_RC_ENOSYS";
 case 130:
  return "IAVF_AQ_RC_ERANGE";
 case 142:
  return "IAVF_AQ_RC_EFLUSHED";
 case 150:
  return "IAVF_AQ_RC_BAD_ADDR";
 case 138:
  return "IAVF_AQ_RC_EMODE";
 case 143:
  return "IAVF_AQ_RC_EFBIG";
 }

 FUNC_0(VAR_0->err_str, sizeof(VAR_0->err_str), "%d", VAR_1);
 return VAR_0->err_str;
}
