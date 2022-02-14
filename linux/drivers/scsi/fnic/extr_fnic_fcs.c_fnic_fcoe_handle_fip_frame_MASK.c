
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct fnic {int dummy; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_flags; int fip_dl_len; int fip_ver; int fip_op; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (struct fnic*,int ) ;
 int FUNC_2 (struct fnic*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct fnic*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct fnic *VAR_9, struct sk_buff *VAR_10)
{
 struct fip_header *VAR_11;
 int VAR_12 = 1;
 u16 VAR_13;
 u8 VAR_14;

 if (!VAR_10 || !(VAR_10->data))
  return -1;

 if (FUNC_5(VAR_10))
  goto drop;

 VAR_11 = (struct fip_header *)VAR_10->data;
 VAR_13 = FUNC_4(VAR_11->fip_op);
 VAR_14 = VAR_11->fip_subcode;

 if (FUNC_0(VAR_11->fip_ver) != VAR_7)
  goto drop;

 if (FUNC_4(VAR_11->fip_dl_len) * VAR_0 + sizeof(*VAR_11) > VAR_10->len)
  goto drop;

 if (VAR_13 == VAR_2 && VAR_14 == VAR_4) {
  if (FUNC_3(VAR_9, FUNC_4(VAR_11->fip_flags)))
   goto drop;

  VAR_12 = 1;
 } else if (VAR_13 == VAR_3 && VAR_14 == VAR_6) {

  FUNC_2(VAR_9, VAR_10);
  VAR_12 = 0;
 } else if (VAR_13 == VAR_1 && VAR_14 == VAR_5) {

  FUNC_1(VAR_9, VAR_8);

  VAR_12 = 1;
 }
drop:
 return VAR_12;
}
