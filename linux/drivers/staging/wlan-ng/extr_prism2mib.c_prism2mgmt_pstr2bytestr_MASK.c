
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct p80211pstrd {scalar_t__ len; int data; } ;
struct hfa384x_bytestr {int data; int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

void FUNC_2(struct hfa384x_bytestr *VAR_0,
        struct p80211pstrd *VAR_1)
{
 VAR_0->len = FUNC_0((u16)(VAR_1->len));
 FUNC_1(VAR_0->data, VAR_1->data, VAR_1->len);
}
