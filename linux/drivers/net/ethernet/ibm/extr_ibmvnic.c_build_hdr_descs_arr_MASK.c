
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ibmvnic_tx_buff {scalar_t__ indir_arr; int * hdr_data; int skb; } ;


 int FUNC_0 (int ,int ,int*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_tx_buff *VAR_0,
    int *VAR_1, u8 VAR_2)
{
 int VAR_3[3] = {0, 0, 0};
 int VAR_4;
 u8 *VAR_5 = VAR_0->hdr_data;

 VAR_4 = FUNC_0(VAR_2, VAR_0->skb, VAR_3,
     VAR_0->hdr_data);
 *VAR_1 += FUNC_1(VAR_2, VAR_5, VAR_4, VAR_3,
    VAR_0->indir_arr + 1);
}
