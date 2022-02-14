
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ ip_summed; int priority; scalar_t__ data; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_proto_bcdc_header {int flags; int priority; int data_offset; scalar_t__ flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_proto_bcdc_header*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct brcmf_pub *VAR_7, int VAR_8, u8 VAR_9,
    struct sk_buff *VAR_10)
{
 struct brcmf_proto_bcdc_header *VAR_11;

 FUNC_1(VAR_0, "Enter\n");


 FUNC_2(VAR_10, VAR_3);

 VAR_11 = (struct brcmf_proto_bcdc_header *)(VAR_10->data);

 VAR_11->flags = (VAR_5 << VAR_2);
 if (VAR_10->ip_summed == VAR_6)
  VAR_11->flags |= VAR_1;

 VAR_11->priority = (VAR_10->priority & VAR_4);
 VAR_11->flags2 = 0;
 VAR_11->data_offset = VAR_9;
 FUNC_0(VAR_11, VAR_8);
 FUNC_3(VAR_10->data);
}
