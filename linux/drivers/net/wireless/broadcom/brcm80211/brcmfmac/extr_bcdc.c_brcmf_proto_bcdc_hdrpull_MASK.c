
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int priority; int ip_summed; scalar_t__ data; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_proto_bcdc_header {int flags; int priority; int data_offset; } ;
struct brcmf_if {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_proto_bcdc_header*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct brcmf_pub*,char*,scalar_t__,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct brcmf_if*,int,struct sk_buff*) ;
 struct brcmf_if* FUNC_4 (struct brcmf_pub*,int ) ;
 scalar_t__ FUNC_5 (struct brcmf_if*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct brcmf_pub *VAR_11, bool VAR_12,
    struct sk_buff *VAR_13, struct brcmf_if **VAR_14)
{
 struct brcmf_proto_bcdc_header *VAR_15;
 struct brcmf_if *VAR_16;

 FUNC_2(VAR_0, "Enter\n");


 if (VAR_13->len <= VAR_4) {
  FUNC_2(VAR_10, "rx data too short (%d <= %d)\n",
     VAR_13->len, VAR_4);
  return -VAR_8;
 }

 FUNC_7(VAR_13->data);
 VAR_15 = (struct brcmf_proto_bcdc_header *)(VAR_13->data);

 VAR_16 = FUNC_4(VAR_11, FUNC_0(VAR_15));
 if (!VAR_16) {
  FUNC_2(VAR_10, "no matching ifp found\n");
  return -VAR_8;
 }
 if (((VAR_15->flags & VAR_2) >> VAR_3) !=
     VAR_6) {
  FUNC_1(VAR_11, "%s: non-BCDC packet received, flags 0x%x\n",
    FUNC_5(VAR_16), VAR_15->flags);
  return -VAR_8;
 }

 if (VAR_15->flags & VAR_1) {
  FUNC_2(VAR_0, "%s: BDC rcv, good checksum, flags 0x%x\n",
     FUNC_5(VAR_16), VAR_15->flags);
  VAR_13->ip_summed = VAR_7;
 }

 VAR_13->priority = VAR_15->priority & VAR_5;

 FUNC_6(VAR_13, VAR_4);
 if (VAR_12)
  FUNC_3(VAR_16, VAR_15->data_offset << 2, VAR_13);
 else
  FUNC_6(VAR_13, VAR_15->data_offset << 2);

 if (VAR_13->len == 0)
  return -VAR_9;

 if (VAR_14 != ((void*)0))
  *VAR_14 = VAR_16;
 return 0;
}
