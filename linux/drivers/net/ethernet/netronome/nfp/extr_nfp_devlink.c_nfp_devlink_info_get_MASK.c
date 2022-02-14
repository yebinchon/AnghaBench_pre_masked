
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int cpp; int hwinfo; } ;
struct nfp_nsp {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink_info_req {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int VAR_2 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct nfp_nsp*) ;
 int FUNC_3 (struct devlink_info_req*,char*) ;
 int FUNC_4 (struct devlink_info_req*,char*) ;
 struct nfp_pf* FUNC_5 (struct devlink*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__,int ) ;
 char* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nfp_pf*,struct devlink_info_req*) ;
 int FUNC_10 (struct devlink_info_req*,int,char*,int ) ;
 char* FUNC_11 (int ,char*) ;
 int FUNC_12 (struct nfp_nsp*) ;
 scalar_t__ FUNC_13 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_14 (int ) ;
 int FUNC_15 (struct nfp_nsp*,char*,int ) ;
 int FUNC_16 (char*,char const*) ;
 scalar_t__ FUNC_17 (char const*) ;

__attribute__((used)) static int
FUNC_18(struct devlink *VAR_3, struct devlink_info_req *VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct nfp_pf *VAR_6 = FUNC_5(VAR_3);
 const char *VAR_7, *VAR_8, *VAR_9;
 struct nfp_nsp *VAR_10;
 char *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_12 = FUNC_3(VAR_4, "nfp");
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_11(VAR_6->hwinfo, "assembly.vendor");
 VAR_9 = FUNC_11(VAR_6->hwinfo, "assembly.partno");
 VAR_7 = FUNC_11(VAR_6->hwinfo, "assembly.serial");
 if (VAR_8 && VAR_9 && VAR_7) {
  char *VAR_13;

  VAR_13 = FUNC_7(FUNC_17(VAR_8) + FUNC_17(VAR_9) + FUNC_17(VAR_7) + 1,
         VAR_1);
  if (!VAR_13)
   return -VAR_0;

  VAR_13[0] = '\0';
  FUNC_16(VAR_13, VAR_8);
  FUNC_16(VAR_13, VAR_9);
  FUNC_16(VAR_13, VAR_7);

  VAR_12 = FUNC_4(VAR_4, VAR_13);
  FUNC_6(VAR_13);
  if (VAR_12)
   return VAR_12;
 }

 VAR_10 = FUNC_14(VAR_6->cpp);
 if (FUNC_0(VAR_10)) {
  FUNC_1(VAR_5, "can't access NSP");
  return FUNC_2(VAR_10);
 }

 if (FUNC_13(VAR_10)) {
  VAR_11 = FUNC_8(VAR_2, VAR_1);
  if (!VAR_11) {
   VAR_12 = -VAR_0;
   goto err_close_nsp;
  }

  VAR_12 = FUNC_15(VAR_10, VAR_11, VAR_2);
  if (VAR_12)
   goto err_free_buf;

  VAR_12 = FUNC_10(VAR_4, 0,
         VAR_11, VAR_2);
  if (VAR_12)
   goto err_free_buf;

  VAR_12 = FUNC_10(VAR_4, 1,
         VAR_11, VAR_2);
  if (VAR_12)
   goto err_free_buf;

  FUNC_6(VAR_11);
 }

 FUNC_12(VAR_10);

 return FUNC_9(VAR_6, VAR_4);

err_free_buf:
 FUNC_6(VAR_11);
err_close_nsp:
 FUNC_12(VAR_10);
 return VAR_12;
}
