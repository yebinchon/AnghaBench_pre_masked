
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int buf; } ;
struct nfp_nsp_command_buf_arg {int in_size; int out_size; int out_buf; TYPE_1__ arg; int in_buf; } ;
struct nfp_nsp {int res; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct nfp_nsp*,TYPE_1__*) ;
 int FUNC_4 (struct nfp_cpp*,int,int,int ,int) ;
 int FUNC_5 (struct nfp_cpp*,int ,scalar_t__,int*) ;
 int FUNC_6 (struct nfp_cpp*,int,int,int ,int) ;
 int FUNC_7 (struct nfp_cpp*,char*,int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct nfp_nsp *VAR_6,
   struct nfp_nsp_command_buf_arg *VAR_7)
{
 struct nfp_cpp *VAR_8 = VAR_6->cpp;
 u64 VAR_9, VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_5(VAR_8, FUNC_9(VAR_6->res),
       FUNC_8(VAR_6->res) +
       VAR_3,
       &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_13 = FUNC_1(VAR_5, VAR_9) << 8;
 VAR_10 = FUNC_1(VAR_4, VAR_9);

 if (VAR_7->in_buf && VAR_7->in_size) {
  VAR_11 = FUNC_6(VAR_8, VAR_13, VAR_10,
        VAR_7->in_buf, VAR_7->in_size);
  if (VAR_11 < 0)
   return VAR_11;
 }

 if (VAR_7->out_buf && VAR_7->out_size && VAR_7->out_size > VAR_7->in_size) {
  VAR_11 = FUNC_6(VAR_8, VAR_13, VAR_10 + VAR_7->in_size,
        VAR_7->out_buf, VAR_7->out_size - VAR_7->in_size);
  if (VAR_11 < 0)
   return VAR_11;
 }

 if (!FUNC_0(VAR_2, VAR_13 >> 8) ||
     !FUNC_0(VAR_1, VAR_10)) {
  FUNC_7(VAR_8, "Buffer out of reach %08x %016llx\n",
   VAR_13, VAR_10);
  return -VAR_0;
 }

 VAR_7->arg.buf = FUNC_2(VAR_2, VAR_13 >> 8) |
         FUNC_2(VAR_1, VAR_10);
 VAR_12 = FUNC_3(VAR_6, &VAR_7->arg);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_7->out_buf && VAR_7->out_size) {
  VAR_11 = FUNC_4(VAR_8, VAR_13, VAR_10,
       VAR_7->out_buf, VAR_7->out_size);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return VAR_12;
}
