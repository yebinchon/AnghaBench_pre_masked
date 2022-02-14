
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int* data; size_t len; } ;
struct rtllib_hdr_4addr {int addr2; int frame_ctl; } ;
struct TYPE_3__ {struct lib80211_crypt_data** crypt; } ;
struct rtllib_device {int dev; TYPE_1__ crypt_info; scalar_t__ host_decrypt; } ;
struct lib80211_crypt_data {TYPE_2__* ops; } ;
struct TYPE_4__ {int * decrypt_mpdu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct rtllib_device *VAR_1, struct sk_buff *VAR_2,
   struct lib80211_crypt_data **VAR_3, size_t VAR_4)
{
 struct rtllib_hdr_4addr *VAR_5 = (struct rtllib_hdr_4addr *)VAR_2->data;
 u16 VAR_6 = FUNC_0(VAR_5->frame_ctl);
 int VAR_7 = 0;

 if (VAR_1->host_decrypt) {
  if (VAR_2->len >= VAR_4 + 3)
   VAR_7 = VAR_2->data[VAR_4 + 3] >> 6;

  *VAR_3 = VAR_1->crypt_info.crypt[VAR_7];



  if (*VAR_3 && ((*VAR_3)->ops == ((void*)0) ||
         (*VAR_3)->ops->decrypt_mpdu == ((void*)0)))
   *VAR_3 = ((void*)0);

  if (!*VAR_3 && (VAR_6 & VAR_0)) {





   FUNC_1(VAR_1->dev,
       "Decryption failed (not set) (SA= %pM)\n",
       VAR_5->addr2);
   return -1;
  }
 }

 return 0;
}
