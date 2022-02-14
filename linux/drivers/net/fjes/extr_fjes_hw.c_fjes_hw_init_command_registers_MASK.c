
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fjes_hw {int dummy; } ;
struct fjes_device_command_param {int req_start; int res_start; int share_start; scalar_t__ res_len; scalar_t__ req_len; } ;
typedef int __le32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct fjes_hw *VAR_8,
          struct fjes_device_command_param *VAR_9)
{

 FUNC_1(VAR_2, (__le32)(VAR_9->req_len));

 FUNC_1(VAR_5, (__le32)(VAR_9->res_len));


 FUNC_1(VAR_1,
      (__le32)(VAR_9->req_start & FUNC_0(31, 0)));
 FUNC_1(VAR_0,
      (__le32)((VAR_9->req_start & FUNC_0(63, 32)) >> 32));


 FUNC_1(VAR_4,
      (__le32)(VAR_9->res_start & FUNC_0(31, 0)));
 FUNC_1(VAR_3,
      (__le32)((VAR_9->res_start & FUNC_0(63, 32)) >> 32));


 FUNC_1(VAR_7,
      (__le32)(VAR_9->share_start & FUNC_0(31, 0)));
 FUNC_1(VAR_6,
      (__le32)((VAR_9->share_start & FUNC_0(63, 32)) >> 32));
}
