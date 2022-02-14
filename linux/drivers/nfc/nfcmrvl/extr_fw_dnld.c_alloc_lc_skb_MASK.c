
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct sk_buff {int dummy; } ;
struct nfcmrvl_private {int ndev; } ;
struct nci_data_hdr {scalar_t__ plen; scalar_t__ rfu; int conn_id; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct sk_buff* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 struct nci_data_hdr* FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct nfcmrvl_private *VAR_5, uint8_t VAR_6)
{
 struct sk_buff *VAR_7;
 struct nci_data_hdr *VAR_8;

 VAR_7 = FUNC_2(VAR_5->ndev, (VAR_2 + VAR_6), VAR_0);
 if (!VAR_7) {
  FUNC_3("no memory for data\n");
  return ((void*)0);
 }

 VAR_8 = FUNC_4(VAR_7, VAR_2);
 VAR_8->conn_id = VAR_1;
 VAR_8->rfu = 0;
 VAR_8->plen = VAR_6;

 FUNC_0((__u8 *)VAR_8, VAR_3);
 FUNC_1((__u8 *)VAR_8, VAR_4);

 return VAR_7;
}
