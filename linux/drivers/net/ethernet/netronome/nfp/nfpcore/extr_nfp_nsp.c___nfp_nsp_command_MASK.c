
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_nsp_command_arg {int buf; int option; int code; int dma; int (* error_cb ) (struct nfp_nsp*,int) ;int error_quiet; scalar_t__ timeout_sec; } ;
struct nfp_nsp {int res; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct nfp_cpp*,int ,int,int*) ;
 int FUNC_3 (struct nfp_cpp*,int ,int,int) ;
 int FUNC_4 (struct nfp_cpp*,char*,int,int) ;
 int FUNC_5 (struct nfp_nsp*) ;
 int FUNC_6 (struct nfp_nsp*,int) ;
 int FUNC_7 (struct nfp_cpp*,int*,int ,int,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nfp_cpp*,char*,int,int,int) ;
 int FUNC_11 (struct nfp_nsp*,int) ;

__attribute__((used)) static int
FUNC_12(struct nfp_nsp *VAR_10, const struct nfp_nsp_command_arg *VAR_11)
{
 u64 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct nfp_cpp *VAR_18 = VAR_10->cpp;
 u32 VAR_19;
 int VAR_20;

 VAR_19 = FUNC_9(VAR_10->res);
 VAR_14 = FUNC_8(VAR_10->res);
 VAR_16 = VAR_14 + VAR_7;
 VAR_17 = VAR_14 + VAR_2;
 VAR_15 = VAR_14 + VAR_1;

 VAR_20 = FUNC_5(VAR_10);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_18, VAR_19, VAR_15, VAR_11->buf);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_18, VAR_19, VAR_17,
        FUNC_1(VAR_5, VAR_11->option) |
        FUNC_1(VAR_3, VAR_11->code) |
        FUNC_1(VAR_4, VAR_11->dma) |
        FUNC_1(VAR_6, 1));
 if (VAR_20 < 0)
  return VAR_20;


 VAR_20 = FUNC_7(VAR_18, &VAR_12, VAR_19, VAR_17,
          VAR_6, 0, VAR_0);
 if (VAR_20) {
  FUNC_4(VAR_18, "Error %d waiting for code 0x%04x to start\n",
   VAR_20, VAR_11->code);
  return VAR_20;
 }


 VAR_20 = FUNC_7(VAR_18, &VAR_12, VAR_19, VAR_16, VAR_8,
          0, VAR_11->timeout_sec ?: VAR_0);
 if (VAR_20) {
  FUNC_4(VAR_18, "Error %d waiting for code 0x%04x to complete\n",
   VAR_20, VAR_11->code);
  return VAR_20;
 }

 VAR_20 = FUNC_2(VAR_18, VAR_19, VAR_17, &VAR_13);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_13 = FUNC_0(VAR_5, VAR_13);

 VAR_20 = FUNC_0(VAR_9, VAR_12);
 if (VAR_20) {
  if (!VAR_11->error_quiet)
   FUNC_10(VAR_18, "Result (error) code set: %d (%d) command: %d\n",
     -VAR_20, (int)VAR_13, VAR_11->code);

  if (VAR_11->error_cb)
   VAR_11->error_cb(VAR_10, VAR_13);
  else
   FUNC_6(VAR_10, VAR_13);
  return -VAR_20;
 }

 return VAR_13;
}
