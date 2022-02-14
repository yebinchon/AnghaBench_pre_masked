
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int code; } ;
struct nfp_nsp_command_buf_arg {scalar_t__ out_size; scalar_t__ in_size; TYPE_2__ arg; scalar_t__ out_buf; } ;
struct TYPE_3__ {int minor; unsigned int major; } ;
struct nfp_nsp {int res; TYPE_1__ ver; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (struct nfp_cpp*,int ,scalar_t__,int *) ;
 int FUNC_4 (struct nfp_cpp*,char*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct nfp_nsp*,struct nfp_nsp_command_buf_arg*) ;
 int FUNC_6 (struct nfp_nsp*,struct nfp_nsp_command_buf_arg*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct nfp_nsp *VAR_8, struct nfp_nsp_command_buf_arg *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 struct nfp_cpp *VAR_13 = VAR_8->cpp;
 u64 VAR_14;
 int VAR_15;

 if (VAR_8->ver.minor < 13) {
  FUNC_4(VAR_13, "NSP: Code 0x%04x with buffer not supported (ABI %hu.%hu)\n",
   VAR_9->arg.code, VAR_8->ver.major, VAR_8->ver.minor);
  return -VAR_1;
 }

 VAR_15 = FUNC_3(VAR_13, FUNC_8(VAR_8->res),
       FUNC_7(VAR_8->res) +
       VAR_2,
       &VAR_14);
 if (VAR_15 < 0)
  return VAR_15;


 if (VAR_9->out_buf && VAR_9->out_size && VAR_9->out_size > VAR_9->in_size)
  FUNC_2(VAR_9->out_buf, 0, VAR_9->out_size - VAR_9->in_size);

 VAR_12 = FUNC_1(VAR_9->in_size, VAR_9->out_size);
 VAR_11 = FUNC_0(VAR_5, VAR_14) * VAR_6 +
     FUNC_0(VAR_4, VAR_14) * VAR_7;
 VAR_10 = FUNC_0(VAR_3, VAR_14);
 if (VAR_11 >= VAR_12) {
  return FUNC_5(VAR_8, VAR_9);
 } else if (!VAR_10) {
  FUNC_4(VAR_13, "NSP: default buffer too small for command 0x%04x (%u < %u)\n",
   VAR_9->arg.code, VAR_11, VAR_12);
  return -VAR_0;
 }

 return FUNC_6(VAR_8, VAR_9, VAR_12, VAR_10);
}
